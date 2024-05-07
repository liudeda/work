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

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <sys/time.h>
#include "esp_system.h"
#include "driver/i2c.h"
#include "iot_i2c_bus.h"
#include "iot_xl9555.h"
#include "esp_log.h"

extern xl9555_handle_t  xl9555  ;
#define XL9555_ERROR_CHECK(con, err, format, ...) do { \
        if (con) { \
            if(*format != '\0') \
                ESP_LOGE(TAG,"line:%d, <ret: %d> " format, __LINE__, err,  ##__VA_ARGS__); \
            return err; \
        } \
    } while(0)

#define ACK_CHECK_EN   0x1         /*!< I2C master will check ack from slave*/
#define ACK_CHECK_DIS  0x0         /*!< I2C master will not check ack from slave */
#define TIMEOUT_MS     1000        /*!< I2C timeout ms */

typedef struct {
    i2c_bus_handle_t bus;
    uint16_t dev_addr;
    uint32_t counter;
} xl9555_dev_t;

static const char *TAG = "xl9555";

xl9555_handle_t iot_xl9555_create(i2c_bus_handle_t bus, uint16_t dev_addr)
{
    xl9555_dev_t* xl9555_dev = (xl9555_dev_t*) calloc(1, sizeof(xl9555_dev_t));
    xl9555_dev->bus = bus;
    xl9555_dev->dev_addr = dev_addr;
    return (xl9555_handle_t) xl9555_dev;
}

esp_err_t iot_xl9555_delete(xl9555_handle_t dev)
{
    xl9555_dev_t* xl9555_dev = (xl9555_dev_t*) dev;
    free(xl9555_dev);
    return ESP_OK;
}

esp_err_t iot_xl9555_write(xl9555_handle_t dev, uint8_t addr, uint8_t *buf, uint8_t len)
{
    XL9555_ERROR_CHECK(NULL == dev, ESP_ERR_INVALID_ARG, "iot xl9555 write \"dev\" is NULL");
    XL9555_ERROR_CHECK(NULL == buf, ESP_ERR_INVALID_ARG, "iot xl9555 write \"buf\" is NULL");

    xl9555_dev_t *xl9555_dev = (xl9555_dev_t *) dev;
    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, (xl9555_dev->dev_addr << 1) | I2C_MASTER_WRITE, ACK_CHECK_EN);
    i2c_master_write_byte(cmd, addr, ACK_CHECK_EN);
    i2c_master_write(cmd, buf, len, ACK_CHECK_EN);
    i2c_master_stop(cmd);
    int ret = iot_i2c_bus_cmd_begin(xl9555_dev->bus, cmd, TIMEOUT_MS / portTICK_PERIOD_MS);
    i2c_cmd_link_delete(cmd);
    return ret;
}

esp_err_t iot_xl9555_read(xl9555_handle_t dev, uint8_t addr, uint8_t *buf, uint8_t len)
{
    XL9555_ERROR_CHECK(NULL == dev, ESP_ERR_INVALID_ARG, "iot xl9555 read \"dev\" is NULL");
    XL9555_ERROR_CHECK(NULL == buf, ESP_ERR_INVALID_ARG, "iot xl9555 read \"buf\" is NULL");

    xl9555_dev_t *xl9555_dev = (xl9555_dev_t *) dev;
    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, (xl9555_dev->dev_addr << 1) | I2C_MASTER_WRITE, ACK_CHECK_EN);
    i2c_master_write_byte(cmd, addr, ACK_CHECK_EN);
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, (xl9555_dev->dev_addr << 1) | I2C_MASTER_READ, ACK_CHECK_EN);
    i2c_master_read(cmd, buf, len, I2C_MASTER_LAST_NACK);
    i2c_master_stop(cmd);
    
    int ret = iot_i2c_bus_cmd_begin(xl9555_dev->bus, cmd, TIMEOUT_MS / portTICK_PERIOD_MS);
    i2c_cmd_link_delete(cmd);
    return ret;
}


esp_err_t iot_xl9555_set_level(xl9555_handle_t dev, xl9555_num_t gpio_num, uint32_t level)
{
    XL9555_ERROR_CHECK(NULL == dev, ESP_ERR_INVALID_ARG, "iot xl9555 set level \"dev\" is NULL");
    
    esp_err_t ret = ESP_OK;
    uint8_t level_data = 0;

    if(gpio_num < XL9555_P1_0){
        ret = iot_xl9555_read(dev, XL9555_REG_OUT0, &level_data,sizeof(level_data));
        level_data = level ? level_data | BIT(gpio_num) : level_data & ~BIT(gpio_num);
        ret |= iot_xl9555_write(dev, XL9555_REG_OUT0, &level_data,sizeof(level_data));
    }else{
        ret = iot_xl9555_read(dev, XL9555_REG_OUT1, &level_data,sizeof(level_data));
        level_data = level ? level_data | BIT(gpio_num - XL9555_P1_0) : level_data & ~BIT(gpio_num - XL9555_P1_0);
        ret |= iot_xl9555_write(dev, XL9555_REG_OUT1, &level_data,sizeof(level_data));
    }
    return ret;
}

int iot_xl9555_get_level(xl9555_handle_t dev, xl9555_num_t gpio_num)
{
    XL9555_ERROR_CHECK(NULL == dev, ESP_ERR_INVALID_ARG, "iot xl9555 get level \"dev\" is NULL");

    esp_err_t ret = ESP_OK;
    uint8_t level_data = 0;

    if(gpio_num < XL9555_P1_0){
        ret = iot_xl9555_read(dev, XL9555_REG_IN0, &level_data,sizeof(level_data));
        XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_read get level error");
        return (int)(level_data & ~BIT(gpio_num));
    }else{
        ret = iot_xl9555_read(dev, XL9555_REG_IN1, &level_data,sizeof(level_data));
        XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_read get level error");
        return (int)(level_data & ~BIT(gpio_num - XL9555_P1_0));
    }
}

esp_err_t iot_xl9555_config_gpio(xl9555_handle_t dev, xl9555_num_t gpio_num, xl9555_pi_t pi, xl9555_config_t config)
{
    XL9555_ERROR_CHECK(NULL == dev, ESP_ERR_INVALID_ARG, "iot xl9555 config gpio \"dev\" is NULL");\

    esp_err_t ret = ESP_OK;
    uint8_t pi_data = 0;
    uint8_t config_data = 0xff;

    if(gpio_num < XL9555_P1_0){
        ret = iot_xl9555_read(dev, XL9555_REG_PI0, &pi_data,sizeof(pi_data));
        XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_read XL9555_REG_PI0 error");

        pi_data = pi ? pi_data | BIT(gpio_num) : (pi_data & ~BIT(gpio_num));
        ret = iot_xl9555_write(dev, XL9555_REG_PI0, &pi_data,sizeof(pi_data));
        XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_write XL9555_REG_PI0 error");

        ret = iot_xl9555_read(dev, XL9555_REG_CONF0, &config_data,sizeof(config_data));
        XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_read XL9555_REG_CONF0 error");

        config_data = config ? config_data | BIT(gpio_num) : (config_data & ~BIT(gpio_num));
        ret = iot_xl9555_write(dev, XL9555_REG_CONF0, &config_data,sizeof(config_data));
        XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_write XL9555_REG_CONF0 error");

    }else{
        ret = iot_xl9555_read(dev, XL9555_REG_PI1, &pi_data,sizeof(pi_data));
        XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_read XL9555_REG_PI1 error");

        pi_data = pi ? pi_data | BIT(gpio_num - XL9555_P1_0) : pi_data & ~BIT(gpio_num - XL9555_P1_0);
        ret = iot_xl9555_write(dev, XL9555_REG_PI1, &pi_data,sizeof(pi_data));
        XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_write XL9555_REG_PI1 error");

        ret = iot_xl9555_read(dev, XL9555_REG_CONF1, &config_data,sizeof(config_data));
        XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_read XL9555_REG_CONF1 error");

        config_data = config ? config_data | BIT(gpio_num - XL9555_P1_0) : config_data & ~BIT(gpio_num - XL9555_P1_0);
        ret = iot_xl9555_write(dev, XL9555_REG_CONF1, &config_data,sizeof(config_data));
        XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_write XL9555_REG_CONF1 error");
    }
    return ret;
}

#if 0
esp_err_t iot_xl9555_config_all_gpio(xl9555_handle_t dev, xl9555_pi_t pi, xl9555_config_t config)
{
    esp_err_t ret = ESP_OK;
    uint8_t pi_data = pi ? 0xff : 0x00;
    uint8_t config_data = config ? 0xff : 0x00;

    ret = iot_xl9555_write(dev, XL9555_REG_PI0, &pi_data,sizeof(pi_data));
    XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_write XL9555_REG_PI0 error");
    ret = iot_xl9555_write(dev, XL9555_REG_PI1, &pi_data,sizeof(pi_data));
    XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_write XL9555_REG_PI1 error");
    ret = iot_xl9555_write(dev, XL9555_REG_CONF0, &config_data,sizeof(config_data));
    XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_write XL9555_REG_CONF0 error");
    ret = iot_xl9555_write(dev, XL9555_REG_CONF1, &config_data,sizeof(config_data));
    XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_write XL9555_REG_CONF1 error");

    return ret;
}
#endif
#if 1
esp_err_t iot_xl9555_config_all_gpio(xl9555_handle_t dev, xl9555_pi_t pi, xl9555_config_t config)
{
    esp_err_t ret = ESP_OK;
    uint8_t pi_data = pi ? 0xff : 0x00;
    uint8_t config_data = config ? 0xff : 0x00;
    uint8_t tmep_config_data = 0x80;
    uint8_t tmep_config_data0 = 0x0;

    ret = iot_xl9555_write(dev, XL9555_REG_PI0, &pi_data,sizeof(pi_data));
    XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_write XL9555_REG_PI0 error");
    ret = iot_xl9555_write(dev, XL9555_REG_PI1, &pi_data,sizeof(pi_data));
    XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_write XL9555_REG_PI1 error");
    //ret = iot_xl9555_write(dev, XL9555_REG_OUT0, &config_data,sizeof(config_data));
    ret = iot_xl9555_write(dev, XL9555_REG_OUT0, &tmep_config_data0,sizeof(config_data));
    XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_write XL9555_REG_CONF0 error");

    //ret = iot_xl9555_write(dev, XL9555_REG_OUT1, &config_data,sizeof(config_data));
    ret = iot_xl9555_write(dev, XL9555_REG_OUT1, &tmep_config_data,sizeof(config_data));
    XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_write XL9555_REG_CONF1 error");
    ret = iot_xl9555_write(dev, XL9555_REG_CONF0, &config_data,sizeof(config_data));
    XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_write XL9555_REG_CONF0 error");
    ret = iot_xl9555_write(dev, XL9555_REG_CONF1, &config_data,sizeof(config_data));
    XL9555_ERROR_CHECK(ret != ESP_OK, ESP_FAIL, "iot_xl9555_write XL9555_REG_CONF1 error");

    return ret;
}
#endif
#if 1
void set_xl9555_all(xl9555_handle_t dev,uint32_t level)
{
    int i;
    for(i = 0; i < 16; i++)
    {
        iot_xl9555_set_level(dev,i,level);
    }
}
#endif
