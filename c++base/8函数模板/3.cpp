/**
 * @file 3.cpp
 * @author liudeda (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-05-22
 * 类的模版
 * 类模板可以定义多个类型的参数，比如：
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <string>
template <typename T>   //< 模板参数列表
class Operator
{
public:
     T add(T a, T b);
     T sub(T a, T b);
};
template <typename T>
T Operator<T>::add(T a, T b)
{
     return a + b;
}
template <typename T>
T Operator<T>::sub(T a, T b)
{
     return a - b;
}
int main()
{
     Operator<int> op;
     Operator<double> op2;
     Operator<std::string> op3;
     std::cout << op.add(1, 2) << std::endl;
     std::cout << op.sub(1, 2) << std::endl;
     std::cout << op2.add(1.9, 2.2) << std::endl;
     std::cout << op2.sub(1.9, 2.2) << std::endl;
     std::cout << op3.add("hello", "world") << std::endl;
     return 0;
}