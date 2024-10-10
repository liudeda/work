// 设计一个形状类，用于计算常用形状的面积和体积
// 如矩形、圆形、三角形、正方形等
// 1. 定义一个形状类Shape，具有计算面积和体积的接口函数
#include <iostream>
#include <cmath>

// 基类 Shape
class Shape {
public:
    virtual double getArea() const = 0;     // 纯虚函数，用于计算面积
    virtual double getVolume() const = 0;   // 纯虚函数，用于计算体积（对于二维形状，可以返回0或抛出异常）
    virtual ~Shape() {}                    // 虚析构函数，确保正确的析构顺序
};

// 二维矩形类 Rectangle，继承自 Shape
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double getArea() const override {
        return width * height;
    }

    double getVolume() const override {
        // 二维形状没有体积，可以返回0或抛出异常
        return 0.0;
    }
};

// 三维立方体类 Cube，继承自 Shape
class Cube : public Shape {
private:
    double side;

public:
    Cube(double s) : side(s) {}

    double getArea() const override {
        // 立方体的表面积
        return 6 * side * side;
    }

    double getVolume() const override {
        // 立方体的体积
        return side * side * side;
    }
};

int main() {
    // 创建一个矩形对象，并计算其面积和体积（体积为0）
    Rectangle rect(10.0, 5.0);
    std::cout << "Rectangle area: " << rect.getArea() << std::endl;
    std::cout << "Rectangle volume: " << rect.getVolume() << std::endl; // 输出0，因为矩形是二维形状

    // 创建一个立方体对象，并计算其面积和体积
    Cube cube(5.0);
    std::cout << "Cube area: " << cube.getArea() << std::endl;
    std::cout << "Cube volume: " << cube.getVolume() << std::endl;

    return 0;
}