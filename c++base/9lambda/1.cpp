#include <iostream>
using namespace std;
// lambda 表达式
auto printHello = []
{ std::cout << "Hello, World!\n"; };

int main()
{
     printHello(); // 调用 lambda 表达式

     int a = 100;
     auto f = [a](int b) // 捕获外部变量 a
     { std::cout << "a+b: " << a + b << std::endl; };
     f(3); // 调用 f 函数
     return 0;
}
