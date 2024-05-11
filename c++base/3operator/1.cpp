#include <iostream>

class Vector2D
{
public:
    double x, y;
    Vector2D(double x, double y) : x(x), y(y) {}
    // 重载+操作符
    Vector2D operator+(const Vector2D &v) const;
    // 重载<<操作符
    friend std::ostream &operator<<(std::ostream &os, const Vector2D &v);
};

// 重载+操作符，用于Vector2D对象的相加
Vector2D Vector2D::operator+(const Vector2D &v) const
{
    return Vector2D(x + v.x, y + v.y);
}
std::ostream &operator<<(std::ostream &os, const Vector2D &v)
{
    // 定义输出格式
    os << "(" << v.x << ", " << v.y << ")";
    return os; // 返回os以支持连续输出
}
int main()
{
    Vector2D v1(1, 2), v2(3, 4);
    Vector2D v3 = v1 + v2;
    // 使用重载的<<操作符输出Vector2D对象
    std::cout << "V1=" << v1 << std::endl;    
    std::cout << "V2=" << v2 << std::endl;    
    std::cout << "V1+V2=" << v3 << std::endl; // 输出: (4, 6)
    // 等价于
    operator<<(std::cout, v3) << std::endl; // 输出: (4, 6)

    return 0;
}
