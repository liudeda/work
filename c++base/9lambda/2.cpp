#include <iostream>
#include <functional>

// 假设我们有一个函数，它接受一个整数和一个处理该整数的函数作为参数
void processNumber(int a, int b, void (*func)(int a, int b))// 函数指针作为参数 // void (*func)(int a, int b)是函数指针//
{
     func(a, b);// 调用函数指针所指向的函数
}

int main()
{
     // 使用Lambda表达式定义一个简单功能：如果数字是偶数，打印它
     auto add = [](int a, int b)
     { std::cout << " a+b= " << a + b << std::endl; };
     auto sub = [](int a, int b)
     { std::cout << " a-b= " << a - b << std::endl; };
     auto mul = [](int a, int b)
     { std::cout << " a*b= " << a * b << std::endl; };

     // 调用processNumber函数，传入数字和我们的Lambda表达式
     processNumber(
         4, 5, [](int a, int b)
         { std::cout << " a+b= " << a + b << std::endl; });
     processNumber(5, 4, add);
     processNumber(5, 4, sub);
     processNumber(5, 4, mul);

     return 0;
}
