
#include <cstdlib>
#include <iostream>
using namespace std;
class Parent
{
private:
    int a = 1000;
protected:
    int b = 2000;
public:
    int c = 3000;
    void print_a() { cout << "Parent print_a a = " << a << endl; };
    void print_b() { cout << "Parent print_a b = " << b << endl; };
};
class Child : public Parent
{
public:
    Child() { b = 4000; }
    void print_b() { cout << "Child print_b b = " << b << endl; };
    void print_c() { cout << "Child print_c c = " << c << endl; };
};

int main(int argc, char *argv[])
{
    Parent parent;
    Child child;
    parent.print_a();
    parent.print_b();
    // child.print_a();//error C2248: “Parent::print_a”: 无法访问 protected 成员(在“Child”类中声明) 
    child.print_b();
    // child.c = 5000; //error C2248: “Parent::c”: 无法访问 protected 成员(在“Child”类中声明)
    child.print_c();
    return EXIT_SUCCESS;
}
