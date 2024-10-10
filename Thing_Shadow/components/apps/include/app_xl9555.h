#ifndef _APP_XL9555_H_
#define _APP_XL9555_H_
#include "iot_xl9555.h"
#include "app_common.h"
/**
 * VALVE:电磁阀
 * LOCK:锁
 */
typedef enum
{
    RF_POWER_PIN = XL9555_P0_0,
    BEEP_PIN = XL9555_P0_1,
    VALVE_OPEN_PIN = XL9555_P0_2,
    VALVE_CLOSE_PIN = XL9555_P0_3,
    LOCK_OPEN_PIN = XL9555_P0_4,
    LOCK_CLOSE_PIN = XL9555_P0_5,
    MOTOR_POWER_EN_PIN = XL9555_P0_6,
    RUN_LED_PIN = XL9555_P0_7,
    SENSOR_POWER_PIN = XL9555_P1_0,
    GPRS_POWER_PIN = XL9555_P1_1,
    GPRS_PWR_PIN = XL9555_P1_2,
    GPRS_RST_PIN = XL9555_P1_3,
    LCD_VCC_PIN = XL9555_P1_4,
    BAT_ADC_EN = XL9555_P1_5,
    SIM_TYPE = XL9555_P1_6,
    RFID_RST = XL9555_P1_7,
} xl9555_pin_t;
int set_power_state(xl9555_pin_t pin, switch_status_t state);
int set_xl9555_power(switch_status_t state);

int app_xl9555_init(xl9555_handle_t *xl9555);
#endif