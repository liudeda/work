// #include "FreeRTOS.h"
// #include "task.h"
#include "app_common.h"
#include "app_control_operations.h"
#include <stdio.h>
#include "driver/i2c.h"
#include "iot_i2c_bus.h"
#include "esp_system.h"
#include "esp_log.h"
#include "iot_xl9555.h"
#include "app_xl9555.h"
#include "app_i2c_bus.h"
static const char *TAG = "equ_ctrl";
TaskHandle_t task_handle_ctrl_ops;

static xl9555_handle_t xl9555 = NULL;
static i2c_bus_handle_t i2c_bus = NULL;

typedef enum
{
    MOTOR_OPEN = 0,
    MOTOR_CLOSE = 1,
    MOTOR_STOP = 2
} motor_state_t;

typedef enum
{
    MOTOR_TYPE_VALVE = 0,
    MOTOR_TYPE_LOCK,
} motor_type_t;

/**
 * @brief 配置电机供电开发
 * @param level 0:关 1开
 * @param delay_ms
 * @return ESP_OK ESP_FAIL
 */
int set_motor_power(uint8_t level, uint32_t delay_ms)
{
    int ret = ESP_FAIL;
    ret = iot_xl9555_set_level(xl9555, MOTOR_POWER_EN_PIN, level);
    if (delay_ms != 0)
        vTaskDelay(delay_ms / portTICK_PERIOD_MS);
    return ret;
}

int motor_ctrl(motor_type_t type, motor_state_t state, uint32_t delay_ms)
{
    int ret = ESP_FAIL;

    if (state == MOTOR_OPEN)
    {
        ret = iot_xl9555_set_level(xl9555, VALVE_OPEN_PIN, 1);
        ret = iot_xl9555_set_level(xl9555, VALVE_CLOSE_PIN, 0);
    }
    else if (state == MOTOR_CLOSE)
    {
        ret = iot_xl9555_set_level(xl9555, VALVE_OPEN_PIN, 0);
        ret = iot_xl9555_set_level(xl9555, VALVE_CLOSE_PIN, 1);
    }
    else if (state == MOTOR_STOP)
    {
        ret = iot_xl9555_set_level(xl9555, VALVE_OPEN_PIN, 1);
        ret = iot_xl9555_set_level(xl9555, VALVE_CLOSE_PIN, 1);
    }
    if (delay_ms != 0)
        vTaskDelay(delay_ms / portTICK_PERIOD_MS);
    return ret;
}
int lock_motor_ctrl(motor_type_t type, motor_state_t state, uint32_t delay_ms)
{
    int ret = ESP_FAIL;

    if (state == MOTOR_OPEN)
    {
        ret = iot_xl9555_set_level(xl9555, LOCK_OPEN_PIN, 1);
        ret = iot_xl9555_set_level(xl9555, LOCK_CLOSE_PIN, 0);
    }
    else if (state == MOTOR_CLOSE)
    {
        ret = iot_xl9555_set_level(xl9555, LOCK_OPEN_PIN, 0);
        ret = iot_xl9555_set_level(xl9555, LOCK_CLOSE_PIN, 1);
    }
    else if (state == MOTOR_STOP)
    {
        ret = iot_xl9555_set_level(xl9555, LOCK_OPEN_PIN, 1);
        ret = iot_xl9555_set_level(xl9555, LOCK_CLOSE_PIN, 1);
    }
    if (delay_ms != 0)
        vTaskDelay(delay_ms / portTICK_PERIOD_MS);
    return ret;
}

void led_on()
{
    iot_xl9555_set_level(xl9555, RUN_LED_PIN, 1);
}
void led_off()
{
    iot_xl9555_set_level(xl9555, RUN_LED_PIN, 0);
}
void led_task()
{
    iot_xl9555_set_level(xl9555, RUN_LED_PIN, 1);
   vTaskDelay(1000 / portTICK_PERIOD_MS);

    iot_xl9555_set_level(xl9555, RUN_LED_PIN, 0);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
}


int app_valve_ctrl(switch_status_t state)
{
    int ret = ESP_FAIL;
    ret = set_power_state(SENSOR_POWER_PIN, OPEN);
    ret = set_motor_power(1, 2500);
    ret = set_motor_power(0, 0);
    ret = motor_ctrl(MOTOR_TYPE_VALVE, state, 1000);
    ret = motor_ctrl(MOTOR_TYPE_VALVE, MOTOR_STOP, 0);
    return ret;
}
int app_lock_ctrl(switch_status_t state)
{
    int ret = ESP_FAIL;
    ret = set_power_state(SENSOR_POWER_PIN, OPEN);
    ret = set_motor_power(1, 3000);
    ret = set_motor_power(0, 0);
    ret = lock_motor_ctrl(MOTOR_TYPE_LOCK, state, 1000);
    ret = lock_motor_ctrl(MOTOR_TYPE_LOCK, MOTOR_STOP, 0);
    return ret;
}
void task_ctrl_ops(void *pvParameters)
{

    while (1)
    {
        // app_valve_ctrl(OPEN);
        // // app_valve_ctrl(CLOSE);
        // app_lock_ctrl(OPEN);
        // app_lock_ctrl(CLOSE);
        // led_task();
        
    }
}

TaskHandle_t get_ctrl_ops_taskhandle()
{
    return task_handle_ctrl_ops;
}

int ctrl_ops_init()
{
    i2c_bus_init(&i2c_bus);
    app_xl9555_init(&xl9555);

    iot_xl9555_config_gpio(xl9555, VALVE_OPEN_PIN, XL9555_PI_DEFAULT, XL9555_CONF_OUT);
    iot_xl9555_config_gpio(xl9555, VALVE_CLOSE_PIN, XL9555_PI_DEFAULT, XL9555_CONF_OUT);
    iot_xl9555_config_gpio(xl9555, LOCK_OPEN_PIN, XL9555_PI_DEFAULT, XL9555_CONF_OUT);
    iot_xl9555_config_gpio(xl9555, LOCK_CLOSE_PIN, XL9555_PI_DEFAULT, XL9555_CONF_OUT);
    iot_xl9555_config_gpio(xl9555, MOTOR_POWER_EN_PIN, XL9555_PI_DEFAULT, XL9555_CONF_OUT);
    iot_xl9555_config_gpio(xl9555, SENSOR_POWER_PIN, XL9555_PI_DEFAULT, XL9555_CONF_OUT);
    iot_xl9555_config_gpio(xl9555, RUN_LED_PIN, XL9555_PI_DEFAULT, XL9555_CONF_OUT);
    // iot_xl9555_config_gpio(xl9555, ADC_EN, XL9555_PI_DEFAULT, XL9555_CONF_OUT);
    // iot_xl9555_set_level(xl9555, ADC_EN, 1);
    // BaseType_t xTaskCreated = xTaskCreate(task_ctrl_ops,
    //                                       "task_ctrl_ops",
    //                                       BASICS_STACK_SIZE * 2,
    //                                       NULL,
    //                                       tskIDLE_PRIORITY + 1,
    //                                       &task_handle_ctrl_ops);
    // ESP_RETURN_ON_FALSE(xTaskCreated == pdPASS, ESP_FAIL, TAG, " create task_ctrl_ops err");
    return ESP_OK;
}
