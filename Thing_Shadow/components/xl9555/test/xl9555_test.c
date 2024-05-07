// Copyright 2015-2016 Espressif Systems (Shanghai) PTE LTD
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
#include <stdio.h>
#include "unity.h"
#include "driver/i2c.h"
#include "iot_i2c_bus.h"
#include "iot_xl9555.h"
#include "esp_system.h"

#define I2C_MASTER_SCL_IO           26          /*!< gpio number for I2C master clock */
#define I2C_MASTER_SDA_IO           25          /*!< gpio number for I2C master data  */
#define I2C_MASTER_NUM              I2C_NUM_1   /*!< I2C port number for master dev */
#define I2C_MASTER_TX_BUF_DISABLE   0           /*!< I2C master do not need buffer */
#define I2C_MASTER_RX_BUF_DISABLE   0           /*!< I2C master do not need buffer */
#define I2C_MASTER_FREQ_HZ          100000      /*!< I2C master clock frequency */

static i2c_bus_handle_t i2c_bus = NULL;
static xl9555_handle_t xl9555 = NULL;

/**
 * @brief i2c master initialization
 */
void i2c_xl9555_init()
{
    int i2c_master_port = I2C_MASTER_NUM;
    i2c_config_t conf;
    conf.mode = I2C_MODE_MASTER;
    conf.sda_io_num = I2C_MASTER_SDA_IO;
    conf.sda_pullup_en = GPIO_PULLUP_ENABLE;
    conf.scl_io_num = I2C_MASTER_SCL_IO;
    conf.scl_pullup_en = GPIO_PULLUP_ENABLE;
    conf.master.clk_speed = I2C_MASTER_FREQ_HZ;
    i2c_bus = iot_i2c_bus_create(i2c_master_port, &conf);
    xl9555 = iot_xl9555_create(i2c_bus, XL9555_I2C_DEFAULT_ADDRESS);
}

void xl9555_test_task(void* pvParameters)
{
    static int out_status = 0;

    iot_xl9555_config_gpio(xl9555, XL9555_P0_0, XL9555_PI_DEFAULT, XL9555_CONF_OUT);
    iot_xl9555_config_gpio(xl9555, XL9555_P0_1, XL9555_PI_DEFAULT, XL9555_CONF_IN);

    while(1){

        out_status ^= true;
        iot_xl9555_set_level(xl9555, XL9555_P0_0, out_status);

        int in_status = iot_xl9555_get_level(xl9555, XL9555_P0_1);
        printf("xl9555 get level %d\n", in_status);

        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}

void xl9555_test()
{
    i2c_xl9555_init();
    xTaskCreate(xl9555_test_task, "xl9555_test_task", 1024 * 3, NULL, 10, NULL);
}

TEST_CASE("Device xl9555 test", "[xl9555][iot][device]")
{
    xl9555_test();
}

