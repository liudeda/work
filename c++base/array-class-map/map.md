### 0.map是什么

std::map` 是 C++ 标准库中的一个关联容器，它存储键值对（key-value pairs），并且按键排序。每个键都是唯一的，不能重复。`

例如： { {"apple", 1}, {"banana", 2}, {"cherry", 3} }



### 1. 包含头文件
首先，你需要包含 `<map>` 和 `<iostream>` 头文件。

```cpp
#include <map>
#include <iostream>
```

### 2. 定义和初始化 `std::map`
你可以定义一个 `std::map` 并初始化它。

```cpp
std::map<std::string, int> myMap;
```

或者使用初始化列表：

```cpp
std::map<std::string, int> myMap =
{
    {"apple", 1}, 
	{"banana", 2}, 
	{"cherry", 3} 
};
```

### 3. 插入元素
你可以使用 `insert` 方法或直接赋值来插入元素。

```cpp
myMap.insert(std::make_pair("orange", 4));
myMap["grape"] = 5;
```

### 4. 查找元素
你可以使用 `find` 方法来查找元素。如果找到，`find` 返回一个指向该元素的迭代器；否则返回 `end` 迭代器。

```cpp
auto it = myMap.find("banana");
if (it != myMap.end()) {
    std::cout << "Found: " << it->first << " with value " << it->second << std::endl;
} else {
    std::cout << "Not found" << std::endl;
}
```

### 5. 访问元素
你可以使用下标运算符 `[]` 来访问或修改元素。如果键不存在，`[]` 会插入一个默认值（对于 `int` 类型，默认值为 0）。

```cpp
std::cout << "Value of banana: " << myMap["banana"] << std::endl;
myMap["banana"] = 10;
std::cout << "New value of banana: " << myMap["banana"] << std::endl;
```

### 6. 删除元素
你可以使用 `erase` 方法来删除元素。

```cpp
myMap.erase("banana");
```

### 7. 遍历 `std::map`
你可以使用范围基循环或迭代器来遍历 `std::map`。

#### 使用范围基循环
```cpp
for (const auto& pair : myMap) {
    std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
}
```

#### 使用迭代器
```cpp
for (auto it = myMap.begin(); it != myMap.end(); ++it) {
    std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
}
```

### 8. 检查 `std::map` 是否为空
你可以使用 `empty` 方法来检查 `std::map` 是否为空。

```cpp
if (myMap.empty()) {
    std::cout << "Map is empty" << std::endl;
} else {
    std::cout << "Map is not empty" << std::endl;
}
```

### 9. 获取 `std::map` 的大小
你可以使用 `size` 方法来获取 `std::map` 的大小。

```cpp
std::cout << "Size of map: " << myMap.size() << std::endl;
```

### 完整示例

```cpp
#include <map>
#include <iostream>

int main() {
    // 定义并初始化 map
    std::map<std::string, int> myMap = { {"apple", 1}, {"banana", 2}, {"cherry", 3} };

    // 插入元素
    myMap.insert(std::make_pair("orange", 4));
    myMap["grape"] = 5;

    // 查找元素
    auto it = myMap.find("banana");
    if (it != myMap.end()) {
        std::cout << "Found: " << it->first << " with value " << it->second << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    // 访问元素
    std::cout << "Value of banana: " << myMap["banana"] << std::endl;
    myMap["banana"] = 10;
    std::cout << "New value of banana: " << myMap["banana"] << std::endl;

    // 删除元素
    myMap.erase("banana");

    // 遍历 map
    for (const auto& pair : myMap) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    // 检查 map 是否为空
    if (myMap.empty()) {
        std::cout << "Map is empty" << std::endl;
    } else {
        std::cout << "Map is not empty" << std::endl;
    }

    // 获取 map 的大小
    std::cout << "Size of map: " << myMap.size() << std::endl;

    return 0;
}
```

希望这些示例能帮助你理解如何使用 `std::map`。如果有任何问题或需要进一步的解释，请告诉我！