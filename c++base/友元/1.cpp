#include <iostream>
class MyClass
{
private:
    int privateData;

public:
    MyClass() : privateData(10) {}
    // 声明友元函数
    friend void printPrivateData(MyClass &obj);
    // 声明FriendClass为友元类
    friend class FriendClass;
};

class FriendClass
{
public:
    void printData(MyClass &obj)
    {
        std::cout << "Private Data: " << obj.privateData << std::endl;
    }
};
// 定义友元函数
void printPrivateData(MyClass &obj)
{
    std::cout << "Private Data: " << obj.privateData << std::endl;
}

int main()
{
    MyClass obj;
    printPrivateData(obj); // 能够访问并打印privateData
    FriendClass friendObj;
    friendObj.printData(obj);
    return 0;
}

/*
注释掉友元声明，编译报错：
error C2248: “MyClass::privateData”: 无法访问 private 成员(
在“MyClass”类中声明) [C:\work\c++base\build\MyProject.vcxproj]
*/