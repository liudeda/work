#ifndef _APP_I2C_BUS_H_
#define _APP_I2C_BUS_H_
#include "iot_i2c_bus.h"
i2c_bus_handle_t get_i2c_bus_handle(void);
int i2c_bus_init(i2c_bus_handle_t *bus) ;

#endif