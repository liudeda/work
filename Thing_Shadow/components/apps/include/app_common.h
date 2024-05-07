#ifndef _APP_COMMON_H_
#define _APP_COMMON_H_
#include "esp_check.h"
#include "esp_log.h"
#define BASICS_STACK_SIZE 1024

typedef enum
{

    CLOSE = 0,
    OPEN = 1,
} switch_status_t;

#endif