
#include <cstdlib>
#include <iostream>
using namespace std;
class Parent
{
private:
    int a=1000;
protected:
    int b=1000;
public:
    void print_a() { cout << "Parent print_a a = " << a << endl; };
    void print_b() { cout << "Parent print_a b = " << b << endl; };
};

class Child : public Parent
{
public:
    Child() { b = 3000; }
    int c = 4000;
    // void print_a() { cout << "a = " << a << endl; };
    // 这个错误是因为在 Child 类中试图访问 Parent 类的私有成员 a。在 C++ 中，私有成员只能被其所在的类访问，不能被继承类或其他类访问。
    //  在 Child 类中，你可以访问 Parent 类的公有成员和保护成员，但不能访问私有成员。所以，你不能在 Child 类中直接访问 a。
    void print_b() { cout << "Child print_b b = " << b << endl; };
    void print_c() { cout << "Child print_c c = " << c << endl; };
};

int main(int argc, char *argv[])
{

    Child child;
    child.Parent::print_a();
    child.Parent::print_b();//明确调用父类的print_b函数
    child.print_a();
    child.print_b();
    child.print_c();
    return EXIT_SUCCESS;
}
