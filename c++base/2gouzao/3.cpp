/**
 * @file 2.cpp
 * @author liudeda
 * @brief无参构造函数和有参构造函数 拷贝构造 初始化列表的形式
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
    void setName(char *name);
    char *getName();
    void print();
    Person();
    Person(char *name);
    Person(const Person &p); // 拷贝构造函数
    ~Person();
    // private:
    char *name;
};
Person::Person()
{
    cout << "Person()" << endl;
}
Person::Person(char *set_name)
{
    cout << "Person(char name)" << endl;
    name = new char[100];
    strcpy(name, set_name);
}
Person::Person(const Person &p) : name(p.name) // 拷贝构造函数
{
    cout << "Person(const Person &p)" << endl;
}
Person::~Person()
{
    cout << "~Person()" << endl;
    delete[] name;
}
void Person::setName(char *name)
{
    // this->name = name
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
    cout << "Hello World" << __FILE__ << endl;
    // 创建对象
    {
        Person p2("zhangsan");
        p2.print();

        Person p3(p2); // 调用拷贝构造函数
        p3.print();
        printf("p2.name address: %p\n", p2.name);
        printf("p3.name address: %p\n", p3.name);
    }
    _sleep(1); // sleep(1

    printf("Press any key to continue...\r\n");
    getchar();
    return 0;
}