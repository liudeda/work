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

int iot_adc_init();
int get_voltage_mv(adc_channel_t channel, int *voltage, uint16_t interval, uint16_t count);
void gpio16_init(void);
void gpio16_set_level(int level);