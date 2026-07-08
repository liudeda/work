#include <iostream>
/**
 * 默认参数值的使用
 * 1、有默认值可以直接调用，不传参，则使用默认值
 * 2、传参后，则使用传入的参数。
 */
int my_add(int a = 10, int b = 20)
{
    return a + b;
}
int test1()
{
    std::cout << "a+b=" << my_add() << std::endl;
    int a = 20;
    int b = 20;
    std::cout << "a+b=" << my_add(a, b) << std::endl;
    return 0;
}
/**
 * @brief 1、默认参数值和普通参数值混合使用
 * 2、默认参数值必须放在普通参数值的后面
 * 3、默认参数值可以省略，但是不能省略第一个参数的值
 * 4、参数从左到右，有默认值了，则后面的参数必须要有默认值
 *
 * @param a
 * @param b
 * @param c
 * @return int
 */
int my_add3(int a, int b = 20, int c = 30)
{
    return a + b + c;
}

int test2()
{

    std::cout << "a+b+c=" << my_add3(100) << std::endl;           // 150
    std::cout << "a+b+c=" << my_add3(100, 100) << std::endl;      // 230
    std::cout << "a+b+c=" << my_add3(100, 100, 100) << std::endl; // 300
    return 0;
}
/**
 * @brief 函数的参数只有类型名  没有形参名，这个参数就是占位参数
 * 由于有类型名 所以 函数调用的时候 必须给占位参数传参。
 * 由于没有形参名 所以 函数内部 是无法使用占位参数。
 *
 * @return int
 */
int my_add4(int a, int b, int)
{
    return a + b;
}
int main()
{
    test1();
    test2();
    // std::cout << "a+b=" << my_add4(10, 20) << std::endl;
    std::cout << "a+b=" << my_add4(10, 20, 30) << std::endl;
}