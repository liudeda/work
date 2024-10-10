#include <iostream>

using namespace std;
class Person
{
public:
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
    void print()
    {
        cout << "name: " << this->name << endl;
    }

// private:
    string name;
};
int main()
{
    cout << "Hello World! Person class size " << sizeof(Person) 
    <<"name size "<< sizeof(Person::name)<< endl;
    // 创建对象
    Person p1;
    p1.setName("zhangsan");
    p1.print();
    return 0;
}
