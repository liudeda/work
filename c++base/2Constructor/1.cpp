/**
 * @file 1.cpp
 * @author liudeda
 * @brief 无参构造函数和有参构造函数
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
    Person();
    Person(string name);
private:
    string name;
};
Person::Person()
{
    cout << "Person()" << endl;
}
Person::Person(string name)
{
    cout << "Person(string name)" << endl;
    this->name = name;
}
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
    p1.print();
    Person p2("zhangsan");
    p2.print();
    p2.setName("lisi");
    p2.print();
    return 0;
}
