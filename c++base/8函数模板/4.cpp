/**
 * @file 4.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-05-22
 * 类的模版
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

     std::cout << op.add(1, 2.3) << std::endl;
     std::cout << op2.add(1.9, 2) << std::endl;
     std::cout << op3.add(1, 2) << std::endl;
     std::cout << op4.add(&a, &b) << std::endl;
}