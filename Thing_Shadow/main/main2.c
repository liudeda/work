/*
 * SPDX-FileCopyrightText: 2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "soc/soc_caps.h"
#include "esp_log.h"
#include "esp_adc/adc_oneshot.h"
#include "esp_adc/adc_cali.h"
#include "esp_adc/adc_cali_scheme.h"
#include "esp_check.h"
#include "iot_adc.h"
#include "app_button.h"
#include "app_control_operations.h"
// #include "app_lcd.h"
#include "app_i2c_bus.h"
#include "app_xl9555.h"
const static char *TAG = "app_main";
int vol;
void app_main(void)
{

  ctrl_ops_init();
  // // ht16c22_test();
  button_test();
  // iot_adc_init();
  while (1)
  {
    // get_voltage_mv(ADC_CHANNEL_6, (int *)&vol, 4,15);
    // vTaskDelay(pdMS_TO_TICKS(2000));
    led_on();
    vTaskDelay(pdMS_TO_TICKS(500));
    led_off();
    vTaskDelay(pdMS_TO_TICKS(500));
  }
}
