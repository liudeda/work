为了说明从C到C++的几个关键升级点，我们可以分别通过简单的示例来阐述这些变化。请注意，由于具体的代码实例未直接提供，以下将以概念描述结合伪代码的形式来展示这些差异。

## 第一课c++新增功能


###  全局变量重定义

**C语言**允许重定义全局变量，它们实际上链接到同一地址：
```c
// file1.c
int global_var = 10;

// file2.c
int global_var = 20; // 这是合法的，最终global_var的值取决于链接顺序
```

**C++**禁止这样的重定义，避免了潜在的混淆和错误：
```cpp
// main.cpp
int global_var = 10;

// other.cpp
// int global_var = 20; // 在C++中这是错误的
```

###  const常量的处理

**C语言**中const变量有独立存储空间：
```c
const int c = 5;
```

**C++**的const常量处理更灵活，通常直接替换为符号表中的值，除非需要地址或跨文件共享：

```cpp
const int c = 5; // 编译时可能直接替换为5
int* ptr = &c; // 如果这样做，C++可能为其分配存储空间
```

### struct类型的加强

**C语言**中的struct仅是数据的集合：
```c
struct Point {
    int x, y;
};
```

**C++**中struct可以有方法，更接近类的概念：

```cpp
struct Point {
    int x, y;
    void print() { std::cout << "Point(" << x << ", " << y << ")"; }
};
```

### 类型和函数的明确性

**C语言**允许默认类型声明，函数参数列表可省略：
```c
int f(); // 参数未知
```

**C++**要求所有变量和函数参数都有明确的类型，避免歧义：
```cpp
int f(); // 明确表示无参数函数
```

### C++布尔类型（bool）
- **简介**：C++新增了`bool`类型，其值只能是`true`或`false`。非0就是true
- **内存占用**：理论上`bool`占用一个字节，但编译器可能根据情况优化。
- **代码示例**：
```cpp
int main(int argc, char *argv[])
{
    int a;
    bool b = true;
    printf("b = %d, sizeof(b) = %d\n", b, sizeof(b));
    
    b = 3;
    a = b;
    printf("a = %d, b = %d\n", a, b);
    
    b = -5;
    a = b;
    printf("a = %d, b = %d\n", a, b);
    
    a = 10;
    b = a;
    printf("a = %d, b = %d\n", a, b);
    
    b = 0;
    printf("b = %d\n", b);
    printf("Press enter to continue ...");
    getchar();	
    return 0;
}


```

输出：
b = 1, sizeof(b) = 1
a = 1, b = 1        
a = 1, b = 1
a = 10, b = 1
b = 0

### 9. 三目运算符的升级

- **C++改进**：C++中的三目运算符可以直接返回变量的引用，增加了灵活性。
- **注意事项**：若结果之一为常量，则返回值类型为该常量的值类型，不能作为左值。
- **代码示例**：
```cpp
int a = 5, b = 10;
int& maxRef = (a > b) ? a : b; // 返回a或b的引用
```



```
#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = 1;
    int b = 2;
    (a < b ? a : b) = 3;
    // (a < b ? 1: b) = 3;//错误的
    printf("a = %d, b = %d\n", a, b);
    printf("Press enter to continue ...");
    getchar();	
    return 0;
}
```

输出：

a = 3, b = 2

## 第二课 引用

### 1.引用的概念与意义

- **定义**：引用是对已定义变量的别名，声明语法为`Type& refName = varName;`。
- **重要性**：提高代码可读性，可替代指针。
- **代码示例**：
```cpp
int num = 42;
int& refNum = num; // refNum是num的引用
```

### 2. const引用
- **声明**：`const Type& refName = var;`，使变量具有只读属性。
- **特点**：用常量初始化const引用时，编译器会分配空间存储常量。
- **代码示例**：
```cpp
const int& constRef = 42; // 编译器分配空间存储42
```

### 3. 引用的内部实现与空间占用
- **实现**：引用在C++内部被实现为一个常量指针。
- **空间**：占用空间与指针相同，但使用时感觉像是变量的直接别名。
- **代码验证**：
```cpp
void func(int& ref) {} // 函数参数的引用不需初始化
```

### 4. 函数返回引用
- **栈变量**：不可作为其他引用的初始值或左值使用。
- **静态/全局变量**：可作为左值或右值使用，能作为其他引用的初始值。
- **示例**：
```cpp
static int globalVar = 0;
int& getGlobalVar() { return globalVar; } // 正确，可作为左值
```

### 综合小结
C++中的`bool`类型提供了更直接的逻辑判断手段。三目运算符的改进使得它更加灵活，能够直接操作变量引用。引用机制的引入，特别是`const`引用，增强了代码的安全性和可读性，而其内部作为常指针的实现细节，展示了C++为了实用性和高效性所做的设计选择。理解这些核心概念对于深入学习C++至关重要。