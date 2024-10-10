#include <iostream>
using namespace std;

class Box
{
public:
    static int objectCount;
    int test;
    Box()
    {
        objectCount++;
    }
    static int getCount()
    {                       // 静态成员函数
        return objectCount; // 返回静态成员变量的值
    }
};

int Box::objectCount = 0; // 初始化静态成员变量

int main()
{
    // 即使没有创建对象，也可以调用
    cout << "Total objects: " << Box::getCount() << endl; // 通过静态成员函数访问静态成员变量
    Box Box1;                                             // 创建对象
    cout << "Total objects: " << Box::getCount() << endl; // 通过静态成员函数访问静态成员变量
    Box Box2;                                             // 创建对象
    cout << "Total objects: " << Box::getCount() << endl; // 通过静态成员函数访问静态成员变量
    cout << "Total objects: " << Box1.getCount() << endl; // 通过对象访问静态成员函数
    cout << "sizeof(Box): " << sizeof(Box) << endl;       // 1
    return 0;
}