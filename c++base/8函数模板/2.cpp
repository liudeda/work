#include <iostream>
#include <string>

template <typename T>
T my_add(T a, T b)
{
     std::cout << "Template function : ";
     T ret = a + b;
     return ret;
}

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
     std::cout << "a+a =  " << my_add(a, a) << std::endl;
     std::cout << "a+b =  " << my_add(a, b) << std::endl;

     std::cout << "b+b =  " << my_add(b, b) << std::endl;
     std::cout << "fc+fd =  " << my_add(fc, fd) << std::endl;

     std::cout << "a+a =  " << my_add<>(a, a) << std::endl;
     std::cout << "b+b =  " << my_add<int>(b, b) << std::endl;
     std::cout << "b+a =  " << my_add<int>(a, b) << std::endl;
     std::cout << "fc+fd =  " << my_add<int>(fc, fd) << std::endl;

     return 0;
}