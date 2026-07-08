

事件循环库使组件能够声明事件，允许其他组件注册处理程序（即在事件发生时执行的代码片段）。此时，无需直接涉及应用程序，松散耦合组件也能够在其他组件状态变化时附加所需的行为。此外，通过将代码执行序列化，在指定的任务中运行事件循环库，可以简化事件处理程序，实现更高效的事件处理。

例如，当某个高级库要使用 Wi-Fi 库时，它可以直接订阅 [ESP32 Wi-Fi 编程模型](https://docs.espressif.com/projects/esp-idf/zh_CN/latest/esp32/api-guides/wifi.html#wifi-programming-model)，对有关事件做出相应。

### 1. 初始化默认事件循环
`esp_event_loop_create_default()`
- **功能**：初始化并启动默认的事件循环。
- **参数**：无
- **返回值**：成功时返回`ESP_OK`，失败时返回错误码。

```c
esp_event_loop_create_default());
```

### 2. 注册事件处理器
`esp_event_handler_register(esp_event_base_t event_base, int32_t event_id, esp_event_handler_t event_handler, void *event_handler_arg)`
- **功能**：为特定的事件基和事件ID注册一个事件处理器。
- **参数**：
  - `event_base`：事件基名。
  - `event_id`：事件ID。
  - `event_handler`：指向事件处理器函数的指针。
  - `event_handler_arg`：传递给事件处理器的自定义数据指针。
- **返回值**：成功时返回`ESP_OK`，失败时返回错误码。

```c
esp_event_handler_register(MY_EVENT_BASE, EVENT_ID_0, &event_handler, NULL));
```

### 3. 发送事件到默认事件循环
`esp_event_post(esp_event_base_t event_base, int32_t event_id, void *event_data, size_t event_data_size, TickType_t ticks_to_wait)`
- **功能**：将事件发送到默认事件循环中。
- **参数**：
  - `event_base`：事件基名。
  - `event_id`：事件ID。
  - `event_data`：事件数据指针。
  - `event_data_size`：事件数据大小。
  - `ticks_to_wait`：等待事件队列有空间的时间（以Tick为单位）。
- **返回值**：成功时返回`ESP_OK`，失败时返回错误码。

```c
esp_event_post(MY_EVENT_BASE, EVENT_ID_0, &my_event_data, sizeof(my_event_data), portMAX_DELAY);
```

如果想要确保事件被立即处理，可以使用`portMAX_DELAY`作为`ticks_to_wait`参数。

### 4. 取消注册事件处理器
`esp_event_handler_unregister(esp_event_base_t event_base, int32_t event_id, esp_event_handler_t event_handler, void *event_handler_arg)`
- **功能**：取消注册之前通过`esp_event_handler_register`注册的事件处理器。
- **参数**：与`esp_event_handler_register`相同。
- **返回值**：成功时返回`ESP_OK`，失败时返回错误码。

```c
esp_event_handler_unregister(MY_EVENT_BASE, EVENT_ID_0, &event_handler, NULL);
```

### 5. 销毁默认事件循环
`esp_event_loop_delete_default()`

- **功能**：销毁默认的事件循环。
- **参数**：无
- **返回值**：成功时返回`ESP_OK`，失败时返回错误码。

通常这个函数会在应用程序退出或重置时调用。

```c
esp_event_loop_delete_default());
```

### 示例代码

下面是一个完整的示例，展示了如何使用上述API：

```c
#include <stdio.h>
#include "esp_event.h"
#include "esp_event_loop.h"

static esp_event_base_t MY_EVENT_BASE = "MY_EVENT";
typedef enum {
    EVENT_ID_0,
    EVENT_ID_1,
} my_event_id_t;

// 事件处理器
static void event_handler(void* arg, esp_event_base_t event_base,
                          int32_t event_id, void* event_data) {
    if (event_base == MY_EVENT_BASE) {
        switch ((my_event_id_t)event_id) {
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

void app_main() {
    // 初始化默认事件循环
    esp_event_loop_create_default());

    // 注册事件处理器
    esp_event_handler_register(MY_EVENT_BASE, EVENT_ID_0, &event_handler, NULL));
    esp_event_handler_register(MY_EVENT_BASE, EVENT_ID_1, &event_handler, NULL));

    // 发送事件
    esp_event_post(MY_EVENT_BASE, EVENT_ID_0, NULL, 0, portMAX_DELAY);
    esp_event_post(MY_EVENT_BASE, EVENT_ID_1, NULL, 0, portMAX_DELAY);

    // 取消注册事件处理器（可选）
    // esp_event_handler_unregister(MY_EVENT_BASE, EVENT_ID_0, &event_handler, NULL));

    // 销毁默认事件循环（可选，在程序结束时）
    // esp_event_loop_delete_default());
}
```

这个示例演示了如何设置和使用默认的事件循环，包括初始化、注册处理器、发送事件以及清理资源。你可以根据自己的需求调整这些步骤。