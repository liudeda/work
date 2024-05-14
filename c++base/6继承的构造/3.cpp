#include <cstdlib>
#include <iostream>

using namespace std;

class Parent
{
public:
    Parent(const char* s)
    {
        cout<<"Parent()"<<" "<<s<<endl;
    }
    
    ~Parent()
    {
        cout<<"~Parent()"<<endl;
    }
};

class Child : public Parent
{
public:
    Child() : Parent("Parameter from Child!")
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
