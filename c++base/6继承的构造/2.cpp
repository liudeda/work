#include <cstdlib>
#include <iostream>

using namespace std;

class Parent
{
public:
    Parent()
    {
        cout<<"Parent()"<<endl;
    }
    
    ~Parent()
    {
        cout<<"~Parent()"<<endl;
    }
};

class Child : public Parent
{
public:
    Child()
    {
        cout<<"Child()"<<endl;
    }  
    ~Child()
    {
        cout<<"~Child()"<<endl;
    }
};
void run()
{
    Child child;
}
int main(int argc, char *argv[])
{
    run();
    return EXIT_SUCCESS;
}
