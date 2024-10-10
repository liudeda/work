#include "data.hpp"
#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass() : num(10)
    {
        std::cout << "MyClass constructed.\n";
    }
    ~MyClass()
    {
        std::cout << "MyClass destructed.\n";
    }
    int getNum() { return num; };

private:
    int num;
};

int main()
{
    int *p = new int;                        // 分配一个int类型的内存
    *p = 10;                                 // 写入值
    int *array = new int[5];                 // 分配一个包含5个int元素的数组
    array[0] = 1;                            // 访问和初始化数组元素
    int *array2 = new int[5]{1, 2, 3, 4, 1}; // 分配一个包含5个int元素的数组并初始化
    cout << *p << endl;                      // 输出值
    // 分别输出数组元素
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    // 输出数组元素
    for (int i = 0; i < 5; i++)
    {
        cout << array2[i] << " ";
    }
    cout << endl;
    MyClass *obj = new MyClass();
    cout << obj->getNum() << endl;
    delete obj; // 释放内存
    obj = nullptr;
    delete p; // 释放内存
    p = nullptr;
    delete[] array; // 释放数组
    array = nullptr;
    delete[] array2; // 释放数组
    array2 = nullptr;
}