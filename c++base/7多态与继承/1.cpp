#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void draw() { cout << "Drawing a generic shape." << endl; }
};
class Circle : public Shape
{
public:
    void draw() { cout << "Drawing a circle." << endl; } // 画圆
};
class Rectangle : public Shape
{
public:
    void draw() { cout << "Drawing a rectangle." << endl; } // 画矩形
};

// 主函数
int main()
{
    Shape shape;
    Circle circle;
    Rectangle rectangle;

    Shape *shape1 = &shape;
    shape1->draw();

    shape1 = &circle;
    shape1->draw();
    
    shape1 = &rectangle ;  
    shape1->draw();

    return 0;
}
