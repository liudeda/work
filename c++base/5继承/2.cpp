
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
    void print_a() { cout << "Parent print_a a = " << a << endl; };
    void print_b() { cout << "Parent print_a b = " << b << endl; };
};
int main(int argc, char *argv[])
{
    Parent parent;

    parent.print_a();
    parent.print_b();
    printf("parent.b = %d\n", parent.b);
    // printf("parent.a = %d\n", parent.a);
    return EXIT_SUCCESS;
}
