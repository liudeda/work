/**
 * @file 2.cpp
 * @author liudeda (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-05-11
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <string>

class Person
{
private:
    std::string name;
    int age;

public:
    Person(const std::string &n, int a) : name(n), age(a) {}
    // 重载<<操作符
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    // 声明友元函数 作用是让全局函数重载<<操作符能够访问Person类的私有成员
};

// 全局函数重载<<操作符，用于Person类对象的输出
std::ostream &operator<<(std::ostream &os, const Person &p)
{
    // 定义输出格式
    os << "Name: " << p.name << ", Age: " << p.age;
    return os; // 返回os以支持连续输出
}

int main()
{
    Person person("Alice", 30);

    // 使用重载的<<操作符输出Person对象
    std::cout << person << std::endl; // 输出: Name: Alice, Age: 30
    // 等价于
    operator<<(std::cout, person) << std::endl; // 输出: Name: Alice, Age: 30
    // 重载<<操作符的返回值是std::ostream&，所以可以支持连续输出
    // 重载运算符本质上是函数重载，只是函数名被重载运算符代替了
    // 根据不同的参数类型，编译器会自动调用对应的重载函数

    return 0;
}