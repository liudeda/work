
#include "app_i2c_bus.h"
static i2c_bus_handle_t i2c_bus = NULL;

#define CONFIG_I2C_MASTER_NUM 0
#define CONFIG_I2C_MASTER_SDA_IO 18
#define CONFIG_I2C_MASTER_SCL_IO 5
#define CONFIG_I2C_MASTER_FREQ_HZ 400000

i2c_bus_handle_t get_i2c_bus_handle(void)
{
    return i2c_bus;
}

int i2c_bus_init(i2c_bus_handle_t *bus) 
{
    i2c_config_t conf;
    conf.mode = I2C_MODE_MASTER;
    conf.sda_io_num = CONFIG_I2C_MASTER_SDA_IO;
    conf.sda_pullup_en = GPIO_PULLUP_ENABLE;
    conf.scl_io_num = CONFIG_I2C_MASTER_SCL_IO;
    conf.scl_pullup_en = GPIO_PULLUP_ENABLE;
    conf.master.clk_speed = CONFIG_I2C_MASTER_FREQ_HZ;
    conf.clk_flags = I2C_SCLK_SRC_FLAG_FOR_NOMAL; // I2C_SCLK_SRC_FLAG_AWARE_DFS;
    *bus = iot_i2c_bus_create(CONFIG_I2C_MASTER_NUM, &conf);
    i2c_bus = *bus;
    return *bus == NULL ? ESP_FAIL : ESP_OK;
}

// DRIVER_ERROR_CHECK(i2c_bus == NULL, ESP_FAIL, "iot_i2c_bus_create error");
