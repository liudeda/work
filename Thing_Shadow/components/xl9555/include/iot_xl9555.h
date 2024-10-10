// Copyright 2020 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef _IOT_XL9555_H_
#define _IOT_XL9555_H_

#include "driver/i2c.h"
#include "iot_i2c_bus.h"

// Adresses
#define XL9555_I2C_ADDRESS_A000   0x20
#define XL9555_I2C_ADDRESS_A001   0x21
#define XL9555_I2C_ADDRESS_A010   0x22
#define XL9555_I2C_ADDRESS_A011   0x23
#define XL9555_I2C_ADDRESS_A100   0x24
#define XL9555_I2C_ADDRESS_A101   0x25
#define XL9555_I2C_ADDRESS_A110   0x26
#define XL9555_I2C_ADDRESS_A111   0x27
#define XL9555_I2C_DEFAULT_ADDRESS   XL9555_I2C_ADDRESS_A000

typedef enum {
    XL9555_REG_IN0   = 0,     /*!< XL9555 Registers Input port 0 */
    XL9555_REG_IN1   = 1,     /*!< XL9555 Registers Input port 1 */
    XL9555_REG_OUT0  = 2,     /*!< XL9555 Registers Output port 0 */
    XL9555_REG_OUT1  = 3,     /*!< XL9555 Registers Output port 1 */
    XL9555_REG_PI0   = 4,     /*!< XL9555 Registers Polarity Inversion port 0 */
    XL9555_REG_PI1   = 5,     /*!< XL9555 Registers Polarity Inversion port 1 */
    XL9555_REG_CONF0 = 6,     /*!< XL9555 Registers Configuration port 0 */
    XL9555_REG_CONF1 = 7,     /*!< XL9555 Registers Configuration port 0 */
    XL9555_REG_MAX   = 8,
    /** @endcond */
} xl9555_reg_t;

typedef enum {
    XL9555_CONF_OUT  = 0,     /*!< XL9555 Registers Ouput port 0 */
    XL9555_CONF_IN   = 1,     /*!< XL9555 Registers Input port 1 */
    /** @endcond */
} xl9555_config_t;


typedef enum {
    XL9555_PI_DEFAULT    = 0,     /*!< XL9555 Polarity Inversion off */
    XL9555_PI_INVERSION  = 1,     /*!< XL9555 Polarity Inversion on */
} xl9555_pi_t;

typedef enum {
    XL9555_P0_0 = 0,     /*!< XL9555_P0_0, input and output */
    XL9555_P0_1 = 1,     /*!< XL9555_P0_1, input and output */
    XL9555_P0_2 = 2,     /*!< XL9555_P0_2, input and output */
    XL9555_P0_3 = 3,     /*!< XL9555_P0_3, input and output */
    XL9555_P0_4 = 4,     /*!< XL9555_P0_4, input and output */
    XL9555_P0_5 = 5,     /*!< XL9555_P0_5, input and output */
    XL9555_P0_6 = 6,     /*!< XL9555_P0_6, input and output */
    XL9555_P0_7 = 7,     /*!< XL9555_P0_7, input and output */
    XL9555_P1_0 = 8,     /*!< XL9555_P1_0, input and output */
    XL9555_P1_1 = 9,     /*!< XL9555_P1_1, input and output */
    XL9555_P1_2 = 10,    /*!< XL9555_P1_2, input and output */
    XL9555_P1_3 = 11,    /*!< XL9555_P1_3, input and output */
    XL9555_P1_4 = 12,    /*!< XL9555_P1_4, input and output */
    XL9555_P1_5 = 13,    /*!< XL9555_P1_5, input and output */
    XL9555_P1_6 = 14,    /*!< XL9555_P1_6, input and output */
    XL9555_P1_7 = 15,    /*!< XL9555_P1_7, input and output */
    XL9555_NUM_MAX = 16,
    /** @endcond */
} xl9555_num_t;

typedef void* xl9555_handle_t;

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Create and init device object and return a device handle
 *
 * @param bus I2C bus object handle
 * @param dev_addr I2C device address of device
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_FAIL Fail
 */
xl9555_handle_t iot_xl9555_create(i2c_bus_handle_t bus, uint16_t dev_addr);

/**
 * @brief Delete and release a device object
 *
 * @param dev object handle of xl9555
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_FAIL Fail
 */
esp_err_t iot_xl9555_delete(xl9555_handle_t dev);

/**
 * @brief Set xl9555 pin level
 *
 * @param dev object handle of xl9555
 * @param gpio_num xl9555 gpio number
 * @param level xl9555 gpio level
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_FAIL Fail
 */
esp_err_t iot_xl9555_set_level(xl9555_handle_t dev, xl9555_num_t gpio_num, uint32_t level);

/**
 * @brief Get xl9555 pin level
 *
 * @param dev object handle of xl9555
 * @param gpio_num xl9555 gpio number
 *
 * @return
 *     - 0 Success
 *     - 1 Success
 *     - -1 Fail
 */
int iot_xl9555_get_level(xl9555_handle_t dev, xl9555_num_t gpio_num);

/**
 * @brief Function configuration of the device
 *
 * @param dev object handle of xl9555
 * @param gpio_num number of device gpio
 * @param pi xl9555 gpio polarity inversion status
 * @param config xl9555 gpio config in/out
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_FAIL Fail
 */
esp_err_t iot_xl9555_config_gpio(xl9555_handle_t dev, xl9555_num_t gpio_num, xl9555_pi_t pi, xl9555_config_t config);

/**
 * @brief Function configuration of the device
 *
 * @param dev object handle of xl9555
 * @param pi xl9555 gpio polarity inversion status
 * @param config xl9555 gpio config in/out
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_FAIL Fail
 */
esp_err_t iot_xl9555_config_all_gpio(xl9555_handle_t dev, xl9555_pi_t pi, xl9555_config_t config);


void set_xl9555_all(xl9555_handle_t dev,uint32_t level);
#ifdef __cplusplus
}
#endif

#endif

