### 定义

Lambda表达式是C++11引入的一种便捷功能，

允许你直接在代码中定义匿名函数对象。

它们特别适合用作算法的参数、回调函数或者短期使用的简短功能实现。

### 语法

```cpp
[capture-list] (parameters) -> return-type { function-body }
```

1. **Capture List（捕获列表）** `[capture-list]`：定义了lambda可以访问的外部作用域变量的方式。可以是按值捕获（`=`, 如`[x]`）、按引用捕获（`&`, 如`[&x]`）、按值捕获并修改（`=[x]`）、按引用捕获并初始化（`&x=value`）或混合使用。省略时默认不捕获任何外部变量。

2. **Parameters（参数列表）** `(parameters)`：和普通函数一样，定义了lambda接受的参数。可以为空，表示不接受任何参数。
3. **Return Type（返回类型）** `-> return-type`：可选部分，显式指定返回类型。如果不写，默认根据函数体进行推导（如果函数体只有一条return语句，则推导该返回类型；如果有多条或无return，则默认返回`void`）。
4. **Function Body（函数体）** `{ function-body }`：包含了lambda表达式的执行代码。

### 示例

1. **简单Lambda**：不接受参数，不返回值，不捕获外部变量。
```cpp
auto printHello = [] { std::cout << "Hello, World!\n"; };
printHello();
```

2. **捕获外部变量**：按值捕获`x`，按引用捕获`y`。
```cpp
int x = 10, y = 20;
auto add = [x, &y](int z) { return x + y + z; };
std::cout << add(5) << std::endl; // 输出35
```

3. **显式返回类型**：指定返回类型为`int`。
```cpp
auto multiply = [](int a, int b) -> int { return a * b; };
std::cout << multiply(3, 4) << std::endl; // 输出12
```

4. **修改捕获的值**：使用`=`捕获`x`意味着按值捕获并允许修改副本。
```cpp
int x = 10;
auto incrementX = [=]() mutable { ++x; }; // mutable允许修改按值捕获的变量
incrementX();
std::cout << x << std::endl; // x仍然是10，因为捕获的是x的副本
```

Lambda表达式极大地提高了代码的灵活性和可读性，特别是在算法和高阶函数的应用中。