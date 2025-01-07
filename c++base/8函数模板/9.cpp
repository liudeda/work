#include <iostream>
#include <utility> // std::forward

// 打印函数，接受任意数量的参数
template <typename... Args>
void print(Args &&...args)
{
    (std::cout << ... << args); // 使用折叠表达式打印所有参数
}

// 日志函数，转发参数到print函数
template <typename... T>
void logMessage(T &&...args)
{
    print(std::forward<T>(args)...); // 使用std::forward保持参数的左值/右值特性
}

int main()
{
    int a = 10;
    std::string str = "Hello";

    logMessage("Logging: ", a, ", ", str, ", ", 3.14); // 打印多个参数
}
