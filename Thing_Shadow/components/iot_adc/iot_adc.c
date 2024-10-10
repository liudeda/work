
#include "iot_adc.h"
#include "esp_adc/adc_oneshot.h"
#include "esp_adc/adc_cali.h"
#include "esp_adc/adc_cali_scheme.h"
#include "esp_log.h"
#include "driver/gpio.h"
/*
 * SPDX-FileCopyrightText: 2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

const static char *TAG = "EXAMPLE";

/*---------------------------------------------------------------
        ADC General Macros
---------------------------------------------------------------*/
// ADC1 Channels
#define ADC_BUF_LEN_MAX 256
#define ADC_AVERAGE_BASE_NUM 6
#define EXAMPLE_ADC1_CHAN0 ADC_CHANNEL_6
// #define EXAMPLE_ADC1_CHAN1 ADC_CHANNEL_3


static bool example_adc_calibration_init(adc_unit_t unit, adc_atten_t atten, adc_cali_handle_t *out_handle);
static void example_adc_calibration_deinit(adc_cali_handle_t handle);

adc_oneshot_unit_handle_t adc1_handle;
adc_oneshot_unit_init_cfg_t init_config1 = {
    .unit_id = ADC_UNIT_1,
};
adc_oneshot_chan_cfg_t config = {
    .bitwidth = ADC_BITWIDTH_DEFAULT,
    .atten = ADC_ATTEN_DB_11,
};
adc_cali_handle_t adc1_cali_handle = NULL;
bool do_calibration1;

int iot_adc_init()
{
    ESP_ERROR_CHECK(adc_oneshot_new_unit(&init_config1, &adc1_handle));
    //-------------ADC1 Config---------------//
    ESP_ERROR_CHECK(adc_oneshot_config_channel(adc1_handle, EXAMPLE_ADC1_CHAN0, &config));
    // ESP_ERROR_CHECK(adc_oneshot_config_channel(adc1_handle, EXAMPLE_ADC1_CHAN1, &config));
    //-------------ADC1 Calibration Init---------------//
    do_calibration1 = example_adc_calibration_init(ADC_UNIT_1, ADC_ATTEN_DB_11, &adc1_cali_handle);
    gpio16_init();
    gpio16_set_level(1);
    return 0;
}
// 初始化gpio16
void gpio16_init(void)
{
    gpio_config_t io_conf;
    // 禁止中断
    io_conf.intr_type = GPIO_INTR_DISABLE;
    // 设置为输出模式
    io_conf.mode = GPIO_MODE_OUTPUT;
    // 设置为输出高电平
    io_conf.pull_down_en = 0;
    io_conf.pull_up_en = 0;
    // 设置为输出端口
    io_conf.pin_bit_mask = (1ULL << GPIO_NUM_16);
    // 根据配置初始化gpio
    gpio_config(&io_conf);
}
// 控制gpio16的电平
void gpio16_set_level(int level)
{
    gpio_set_level(GPIO_NUM_16, level);
}

void shell_sort(int arr[], int len)
{
    int gap, i, j;
    int temp;
    for (gap = len >> 1; gap > 0; gap = gap >> 1)
        for (i = gap; i < len; i++)
        {
            temp = arr[i];
            for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap)
                arr[j + gap] = arr[j];
            arr[j + gap] = temp;
        }
}

esp_err_t get_voltage_mv(adc_channel_t channel, int *voltage, uint16_t interval, uint16_t count)
{
    int data[ADC_BUF_LEN_MAX];
    int adc_reading = 0;
    uint32_t ave_base_start;

    ave_base_start = (count - ADC_AVERAGE_BASE_NUM) / 2;
    for (size_t i = 0; i < count; i++)
    {
        ESP_ERROR_CHECK(adc_oneshot_read(adc1_handle, channel, &data[i]));
        vTaskDelay(pdMS_TO_TICKS(interval));
    }
    shell_sort(data, count);
    for (size_t i = ave_base_start;
         i < ave_base_start + ADC_AVERAGE_BASE_NUM;
         i++)
    {
        adc_reading += data[i];
    }
    adc_reading /= ADC_AVERAGE_BASE_NUM;
    if (do_calibration1)
    {
        adc_cali_raw_to_voltage(adc1_cali_handle, adc_reading, voltage);

        ESP_LOGI(TAG, " yuan %d yuan vol %d", adc_reading, *voltage );
    }

    return ESP_OK;
}

/*---------------------------------------------------------------
        ADC Calibration
---------------------------------------------------------------*/
static bool example_adc_calibration_init(adc_unit_t unit, adc_atten_t atten, adc_cali_handle_t *out_handle)
{
    adc_cali_handle_t handle = NULL;
    esp_err_t ret = ESP_FAIL;
    bool calibrated = false;

#if ADC_CALI_SCHEME_CURVE_FITTING_SUPPORTED
    if (!calibrated)
    {
        ESP_LOGI(TAG, "calibration scheme version is %s", "Curve Fitting");
        adc_cali_curve_fitting_config_t cali_config = {
            .unit_id = unit,
            .atten = atten,
            .bitwidth = ADC_BITWIDTH_DEFAULT,
        };
        ret = adc_cali_create_scheme_curve_fitting(&cali_config, &handle);
        if (ret == ESP_OK)
        {
            calibrated = true;
        }
    }
#endif

#if ADC_CALI_SCHEME_LINE_FITTING_SUPPORTED
    if (!calibrated)
    {
        ESP_LOGI(TAG, "calibration scheme version is %s", "Line Fitting");
        adc_cali_line_fitting_config_t cali_config = {
            .unit_id = unit,
            .atten = atten,
            .bitwidth = ADC_BITWIDTH_DEFAULT,
        };
        ret = adc_cali_create_scheme_line_fitting(&cali_config, &handle);
        if (ret == ESP_OK)
        {
            calibrated = true;
        }
    }
#endif

    *out_handle = handle;
    if (ret == ESP_OK)
    {
        ESP_LOGI(TAG, "Calibration Success");
    }
    else if (ret == ESP_ERR_NOT_SUPPORTED || !calibrated)
    {
        ESP_LOGW(TAG, "eFuse not burnt, skip software calibration");
    }
    else
    {
        ESP_LOGE(TAG, "Invalid arg or no memory");
    }

    return calibrated;
}

static void example_adc_calibration_deinit(adc_cali_handle_t handle)
{
#if ADC_CALI_SCHEME_CURVE_FITTING_SUPPORTED
    ESP_LOGI(TAG, "deregister %s calibration scheme", "Curve Fitting");
    ESP_ERROR_CHECK(adc_cali_delete_scheme_curve_fitting(handle));

#elif ADC_CALI_SCHEME_LINE_FITTING_SUPPORTED
    ESP_LOGI(TAG, "deregister %s calibration scheme", "Line Fitting");
    ESP_ERROR_CHECK(adc_cali_delete_scheme_line_fitting(handle));
#endif
}
