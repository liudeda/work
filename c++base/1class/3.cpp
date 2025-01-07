#include <iostream>

using namespace std;
class Person
{
private:
    string name;

public:
    void setName(string name);
    string getName();
    void print();
};

void Person::setName(string name)
{
    this->name = name;
}
string Person::getName()
{
    return this->name;
}
void Person::print()
{
    cout << "name: " << this->name << endl;
}
int main()
{
    cout << "Hello World! Person " << endl;
    // 创建对象
    Person p1;
    p1.setName("zhangsan");
    p1.print();
    return 0;
}
