// 【函数重载】c++的多态的特性（重要）
// 函数重载：同一个函数名在不同场景下可以具有不同的含义。
// 函数重载意义：方便的使用函数名。

// 函数重载的规则：  同名函数，参数个数不同，参数类型不同，参数顺序不同，则构成重载。
#include <iostream>
void my_func(int a)
{
    std::cout << "int a" << std::endl;
}
void my_func(double a)
{
    std::cout << "double a" << std::endl;
}
void my_func(int a, double b)
{
    std::cout << "int a, double b" << std::endl;
}
void my_func(double a, int b)
{
    std::cout << "double a, int b" << std::endl;
}
int main()
{
    my_func(1);      // int a
    my_func(1.0);    // double a
    my_func(1, 2.0); // int a, double b
    my_func(2.0, 1); // double a, int b
}
// 函数重载的原理：
// 编译器根据函数名和参数生成了不同的函数。实际上有多个函数  
// 编译器通过函数名和参数列表的组合，来确定调用哪个函数。

