#include <iostream>

using namespace std;

// 基类 Shape
class Shape {
public:
    // 虚函数，用于在派生类中覆盖
    virtual void draw() const {
        cout << "Drawing a generic shape." << endl;
    }

    // 虚析构函数，确保派生类的析构函数被正确调用
    virtual ~Shape() {}
};

// 派生类 Circle 
class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a circle." << endl;//画圆
    }
};

// 派生类 Rectangle
class Rectangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a rectangle." << endl;//画矩形
    }
};

// 接受 Shape 类型指针的函数，演示多态
void drawShape(const Shape* shape) {
    shape->draw(); // 多态调用
}

// 主函数
int main() {
    Circle circle;
    Rectangle rectangle;

    // 使用基类指针指向派生类对象，并演示多态
    Shape* shape1 = &circle;
    Shape* shape2 = &rectangle;

    drawShape(shape1); // 输出：Drawing a circle.
    drawShape(shape2); // 输出：Drawing a rectangle.

    return 0;
}
