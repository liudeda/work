/**
 * @file 2.cpp
 * @author your name (you@domain.com)
 * @brief 计算两个数的和
 * @version 0.1
 * @date 2024-12-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <string>
/**
 * @brief 计算两个数的和 模版函数
 * 
 * @tparam T 
 * @param a 
 * @param b 
 * @return T 
 */
template <typename T>
T my_add(T a, T b)
{
     std::cout << "Template function : ";
     T ret = a + b;
     return ret;
}

/**
 * @brief 普通函数
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int my_add(int a, int b)
{
     std::cout << "Regular  function : ";
     return a + b;
}

int main()
{
     int a = 5;
     char b = '2';
     float fc = 1.25;
     float fd = 1.25;

     // 使用 std::cout 输出
     std::cout << "b = " << static_cast<int>(b) << std::endl;
     std::cout << "a+a =  " << my_add(a, a) << std::endl;//完全匹配普通函数，优先调用普通函数
     std::cout << "a+b =  " << my_add(a, b) << std::endl;//传入2个不同数据类型的参数，普通函数支持自动数据类型转换，优先调用普通函数

     std::cout << "b+b =  " << my_add(b, b) << std::endl;
     std::cout << "fc+fd =  " << my_add(fc, fd) << std::endl;

     std::cout << "a+a =  " << my_add<>(a, a) << std::endl;
     std::cout << "b+b =  " << my_add<int>(b, b) << std::endl;
     std::cout << "b+a =  " << my_add<int>(a, b) << std::endl;
     std::cout << "fc+fd =  " << my_add<int>(fc, fd) << std::endl;

     return 0;
}