/**
 * @file 3.cpp
 * @author liudeda
 * @brief浅拷贝构造函数演示
 * @version 0.1
 * @date 2024-05-08
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <cstring>
#include <iostream>
using namespace std;
class Person
{
public:
    void setName(const char *name);
    char *getName();
    void print();
    Person();
    Person(const char *name);
   explicit  Person(const Person &p); // 拷贝构造函数
    ~Person();
    // private:
    char *name;
};
Person::Person()
{
    cout << "Person()" << endl;
    name = nullptr;
}
Person::Person(const char *set_name)
{
    cout << "Person(char name)" << endl;
    name = new char[100];
    strcpy(name, set_name);
}
Person::Person(const Person &p) : name(p.name) // 拷贝构造函数 //初始化列表初始化name 此处是浅拷贝，只传递了指针，没有分配新空间。 //深拷贝方法： //name = new char[100]; //strcpy(name, p.name);
{
    cout << "Person(const Person &p)" << endl;
}
Person::~Person()
{
    cout << "~Person()" << endl;
    delete[] name;
}
void Person::setName(const char *name)
{
    strcpy(this->name, name);
}
char *Person::getName()
{
    return this->name;
}
void Person::print()
{
    cout << "name: " << this->name << endl;
}
int main()
{
    cout << "Hello World Person class size: " << sizeof(Person) << endl;
    // 创建对象
    {
        Person p1 = ("lisi"); // 隐式调用，等同于Person p1("lisi");
        p1.print();
        Person p2("zhangsan"); // 显式调用
        p2.print();
        Person p3(p2); // 调用拷贝构造函数
        p3.print();
        Person p4 = Person(p2);
        Person p5 = p2; // 调用拷贝构造函数
        printf("p2.name address: %p\n", (const void *)p2.name);
        printf("p3.name address: %p\n", (const void *)p3.name);
    }

    std::cout << "Press any key to continue..." << std::endl;
    std::cin.get();
    return 0;
}
