/**
 * @file 1.cpp
 * @author your name (you@domain.com)
 * @brief 函数模版 互换两个变量的值
 * @version 0.1
 * @date 2024-12-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
using namespace std;
template <typename T>
void my_swap(T &a, T &b)
{
    T temp = a;//T是模块化后的类型
    a = b;
    b = temp;
}
int main()
{
    int a = 1;
    int b = 2;
    my_swap(a, b);//等同于my_swap<int>(a,b);
    cout << "a=" << a << " "
         << "b=" << b << endl;

    double fa = 1.1;
    double fb = 2.2;
    my_swap(fa, fb);
    cout << "fa=" << fa << " "
         << "fb=" << fb << endl;
    fa = 3.1;
    fb = 4.2;
    my_swap<double>(fa, fb);
    cout << "fa=" << fa << " "
         << "fb=" << fb << endl;
    return 0;
}
