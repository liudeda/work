#include <cstdlib>
#include <iostream>

using namespace std;

class Parent
{
protected:
    const char *name;

public:
    Parent() { name = "Parent"; }
    void print() { cout << "parent class"
                        << "Name: " << name << endl; }

    Parent(const Parent &p)
    {
        cout << "Parent copy constructor" << endl;
        this->name = p.name;
    }
};
class Child : public Parent
{
protected:
    int i;

public:
    Child(int i)
    {
        cout << "Child class"
             << "Name: " << name << endl;
        this->name = "Child";
        this->i = i;
        }
};
int main(int argc, char *argv[])
{
    Child child();
    child.print();
    // Parent parent = child;
    // // Child(2000);
    // parent.print();
    // Parent* pp = &child;
    // Parent& rp = child;

    // pp->print();

    // rp.print();

    return EXIT_SUCCESS;
}
