**Vector** 教程

### 简介

- **Vector** 是[C++标准程序库](https://zh.wikipedia.org/wiki/C%2B%2B標準程式庫)中的一个[类](https://zh.wikipedia.org/wiki/类_(计算机科学))，可视为会自动扩展容量的数组，以循序（Sequential）的方式维护变量集合。
- vector的特色有支持随机存取，在集合尾端增删元素很快，但是在集合中间增删元素比较费时。
- vector是[C++标准程序库](https://zh.wikipedia.org/wiki/C%2B%2B標準程式庫)中的众多[容器](https://zh.wikipedia.org/wiki/容器_(資料類型))之一。 vector以[模板](https://zh.wikipedia.org/wiki/模板_(C%2B%2B))方式实现，可以保存任意类型的变量，
  包括用户自定义的资料类型，例如：它可以是放置整数（int）类型的vector、也可以是放置字符串（string）类型的vector、
  或者放置用户自定类别（user-defined class）的vector。

### 设计

- **动态大小数组**：`vector`可以自动调整其容量来容纳更多的元素，当现有的容量不足以存放新的元素时，它会自动重新分配内存，通常是原容量的两倍（具体行为可能因编译器实现而异）。
- **连续内存**：尽管可以动态增长，但`vector`中的元素依然保持在连续的内存位置上，这意味着你可以使用下标运算符`[]`来访问元素，就像操作普通数组一样。
- **高效随机访问**：由于元素连续存储，`vector`提供了快速随机访问的能力，时间复杂度为O(1)。
- 

###  引入头文件

首先，你需要引入vector头文件：

```cpp
#include <vector>
```

### 创建向量

你可以创建一个空的向量，或创建一个带有初始值的向量：

```cpp
std::vector<int> vec;          // 默认构造
std::vector<int> vec(10);      // 创建含有10个默认初始化元素的vector
std::vector<int> vec(10, 42);  // 创建含有10个值为42的元素
std::vector<int> vec{1, 2, 3}; // 初始化列表
```

### 添加元素

可以使用`push_back`方法向向量末尾添加元素：

```cpp
vec.push_back(4);           // 在末尾添加元素
vec.insert(vec.begin() + 1, 99); // 在特定位置插入元素
vec.emplace_back(5);       // 尾部高效构造新元素
```

###  访问元素

可以使用索引运算符或`at`方法访问元素：

```cpp
int first = vec1[0]; // 访问第一个元素
int second = vec1.at(1); // 访问第二个元素
```

### 删除元素

```cPP
vec.pop_back();            // 删除最后一个元素
vec.erase(vec.begin());   // 删除第一个元素
vec.erase(it, it + n);    // 删除迭代器区间内的元素
vec.clear();              // 清空所有元素
```



### 修改元素

可以直接使用索引运算符修改元素：

```cpp
vec1[0] = 10;
vec1.at(1) = 20;
```

### 遍历向量

可以使用范围for循环或迭代器遍历向量：

```cpp
// 范围for循环
for(int value : vec1) {
    std::cout << value << " ";
}

// 迭代器
for(auto it = vec1.begin(); it != vec1.end(); ++it) {
    std::cout << *it << " ";
}
```

###  删除元素

可以使用`pop_back`方法从末尾删除元素，或使用`erase`方法删除特定位置的元素：

```cpp
vec1.pop_back(); // 删除最后一个元素

// 删除第一个元素
vec1.erase(vec1.begin());

// 删除第三个到第五个元素
vec1.erase(vec1.begin() + 2, vec1.begin() + 5);
```

###  获取大小和容量

可以使用`size`方法获取向量的大小，使用`capacity`方法获取容量：

```cpp
size_t size = vec1.size();
size_t capacity = vec1.capacity();
```

### 其他有用的方法

- `clear()`：清空向量
- `empty()`：判断向量是否为空
- `resize()`：调整向量大小
- `shrink_to_fit()`：减少向量的容量以适应其大小

### 示例代码

以下是一个完整的示例代码，展示了上述所有操作：

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    // 添加元素
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    // 修改元素
    vec[0] = 10;

    // 访问元素
    std::cout << "First element: " << vec[0] << std::endl;
    std::cout << "Second element: " << vec.at(1) << std::endl;

    // 遍历向量
    std::cout << "Elements: ";
    for(int value : vec) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // 删除元素
    vec.pop_back();
    vec.erase(vec.begin());

    // 显示大小和容量
    std::cout << "Size: " << vec.size() << std::endl;
    std::cout << "Capacity: " << vec.capacity() << std::endl;

    // 清空向量
    vec.clear();
    std::cout << "Is empty: " << vec.empty() << std::endl;

    return 0;
}
```

