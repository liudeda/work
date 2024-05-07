
#include "app_i2c_bus.h"
#include "app_common.h"
#include "iot_xl9555.h"
#include "app_xl9555.h"

static xl9555_handle_t app_xl9555 = NULL;
#define xl9555_POWER_PIN 17

int i2c_xl9555_init(xl9555_handle_t *xl9555, i2c_bus_handle_t i2c_bus)
{
    *xl9555 = iot_xl9555_create(i2c_bus, XL9555_I2C_DEFAULT_ADDRESS);
    app_xl9555 = *xl9555;
    return *xl9555 == NULL ? ESP_FAIL : ESP_OK;
    // DRIVER_ERROR_CHECK(xl9555 == NULL, ESP_FAIL, "iot_xl9555_create error");
}

int xl9555_power_gpio_init()
{
    int ret = ESP_OK;
    gpio_config_t io_conf;
    io_conf.intr_type = GPIO_INTR_DISABLE;
    io_conf.mode = GPIO_MODE_OUTPUT;
    io_conf.pin_bit_mask = (1ULL << xl9555_POWER_PIN);
    io_conf.pull_down_en = GPIO_PULLDOWN_DISABLE;
    io_conf.pull_up_en = GPIO_PULLUP_DISABLE;
    ret = gpio_config(&io_conf);
    return ret;
}
int set_power_state(xl9555_pin_t pin, switch_status_t state)
{
    int ret = ESP_FAIL;
    ret = iot_xl9555_set_level(app_xl9555, pin, state);
    return ret;
}
int set_xl9555_power(switch_status_t state)
{
    int ret = ESP_FAIL;
    ret = gpio_set_level(xl9555_POWER_PIN, state);
    return ret;
}

int app_xl9555_init(xl9555_handle_t *xl9555)
{
    int ret = ESP_OK;
    ESP_LOGI(__func__, "run xl955 init");
    xl9555_power_gpio_init();
    set_xl9555_power(OPEN);
    i2c_xl9555_init(xl9555, get_i2c_bus_handle());
    return ret;
}