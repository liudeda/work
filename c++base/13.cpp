#include <iostream>
using namespace std;

/**
 * @brief 基类：动物
 */
class Animal {
public:
    void eat() {         
        cout << "I can eat!" << endl;//显示一条消息，表示动物可以吃东西。
    }
};

/**
 * @brief 派生类：狗
 * 这是动物类的派生类，增加了狗特有的行为：叫。
 */
class Dog : public Animal {
public:
    void bark() {
        cout << "I can bark! wang wang !" << endl;//显示一条消息，表示狗可以叫
    }
};


int main() {
    Dog myDog; // 创建一个Dog对象
    myDog.eat(); // 调用基类的方法
    myDog.bark(); // 调用派生类的方法
    return 0;
}