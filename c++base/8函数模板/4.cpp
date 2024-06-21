/**
 * @file 4.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-05-22
 * 类的模版 多个参数 局部特化
 * 编译器优先选择局部特化版本
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <string>
template <typename T1, typename T2>
class Operator
{
public:
     double add(T1 a, T2 b)
     {
          std::cout << "double add(T1 a, T2 b)";
          return (double)(a + b);
     }
};

template <typename T>
class Operator<T, int>
{
public:
     double add(T a, int b)
     {
          std::cout << "double add(T a, int b)";
          return a + b;
     }
};

template <typename T1, typename T2>
class Operator<T1 *, T2 *>
{
public:
     double add(T1 *a, T2 *b)
     {
          std::cout << "add(T1* a, T2* b)";
          return *a + *b;
     }
};
int main()
{
     int a = 1;
     int b = 2;

     Operator<int, double> op;
     Operator<double, int> op2;
     Operator<long, long> op3;
     Operator<int *, int *> op4;
     // 根据以下执行结果，编译器优先选择局部特化版本
     std::cout << "1: " << op.add(1, 2.3) << std::endl;  // 没有局部特化版本 选择模板版本 double add(T1 a, T2 b)
     std::cout << "2: " << op2.add(1.9, 2) << std::endl; // 局部特化版本 先择 double add(T a, int b)
     std::cout << "3: " << op3.add(1, 2) << std::endl;   // 没有局部特化版本 选择模板版本 double add(T1 a, T2 b)
     std::cout << "4: " << op4.add(&a, &b) << std::endl; // 局部特化版本 选择 add(T1* a, T2* b)
}

/**log 打印结果
double add(T1 a, T2 b)1: 3.3
double add(T a, int b)2: 3.9
double add(T1 a, T2 b)3: 3
add(T1* a, T2* b)4: 3
 *
 */