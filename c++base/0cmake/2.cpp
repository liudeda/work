/**
 * @file 2.cpp
 * @author liudeda (liudeda@aliyun.com)
 * @brief 类内声明,类外定义的方式演示
 * @version 0.1
 * @date 2024-05-08
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>

using namespace std;
class Person
{
public:
    void setName(string name);
    string getName();
    void print();

private:
    string name;
};
void Person::setName(string name)
{
    this->name = name;
}
string Person::getName()
{
    return this->name;
}
void Person::print()
{
    cout << "name: " << this->name << endl;
}
int main()
{
    cout << "Hello World!" << endl;
    // 创建对象
    Person p1;
    p1.setName("lisi");
    p1.print();
    return 0;
}
