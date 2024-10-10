#include <iostream>
#include <string>

class Person
{
private:
    std::string name_;
    int age_;
    double height_;

public:
    Person(const std::string &name, int age, double height);
    ~Person();
    void print_info();
};

Person::Person(const std::string &name, int age, double height) : name_(name), age_(age), height_(height)
{
    // name_ = name;
    // age_ = age;
    // height_ = height;
    // std::cout << "Person()" << std::endl;
}
Person::~Person()
{
    std::cout << "~Person()" << std::endl;
}
void Person::print_info()
{
    std::cout << "name: " << name_ << std::endl;
    std::cout << "age: " << age_ << std::endl;
    std::cout << "height: " << height_ << std::endl;
}
int main()
{
    std::cout << "Hello World!" << std::endl;
    Person p1("zhangsan", 20, 180.0);
    p1.print_info();
    return 0;
}
