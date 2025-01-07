
#include "esp_event.h"
#include <stdio.h>

static esp_event_base_t MY_EVENT_BASE = "MY_EVENT";
typedef enum
{
    EVENT_ID_0,
    EVENT_ID_1,
} my_event_id_t;

// 事件处理器
static void event_handler(void *arg,                   // 事件处理器参数（可选）
                          esp_event_base_t event_base, // 事件基
                          int32_t event_id,            // 事件ID
                          void *event_data             // 事件数据（可选）
)
{
    if (event_base == MY_EVENT_BASE)
    {
        switch ((my_event_id_t)event_id)
        {
        case EVENT_ID_0:
            printf("Event ID 0 has been processed.\n");
            break;
        case EVENT_ID_1:
            printf("Event ID 1 has been processed.\n");
            break;
        default:
            printf("Unsupported event\n");
            break;
        }
    }
}

void app_main()
{
    // 初始化默认事件循环
    ESP_ERROR_CHECK(esp_event_loop_create_default());

    // 注册事件处理器
    ESP_ERROR_CHECK(esp_event_handler_register(
        MY_EVENT_BASE,  // 事件基
        EVENT_ID_0,     // 事件ID
        &event_handler, // 事件处理器
        NULL            // 事件处理器参数（可选）
        ));
    ESP_ERROR_CHECK(esp_event_handler_register(MY_EVENT_BASE, EVENT_ID_1, &event_handler, NULL));
    while (1)
    {
        // 发送事件
        esp_event_post(
            MY_EVENT_BASE, // 事件基
            EVENT_ID_0,    // 事件ID
            NULL,          // 事件数据（可选）
            0,             // 事件数据长度（可选）单位字节
            portMAX_DELAY  // 超时时间（可选）单位毫秒，portMAX_DELAY表示永不超时
        );
        esp_event_post(MY_EVENT_BASE, EVENT_ID_1, NULL, 0, portMAX_DELAY);
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
    // 取消注册事件处理器（可选）
    // ESP_ERROR_CHECK(esp_event_handler_unregister(MY_EVENT_BASE, EVENT_ID_0, &event_handler, NULL));

    // 销毁默认事件循环（可选，在程序结束时）
    // ESP_ERROR_CHECK(esp_event_loop_delete_default());
}