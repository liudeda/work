#include <iostream>
class Vector2D
{
public:
    double x, y;
    Vector2D(double x, double y) : x(x), y(y) {}
    // 重载+操作符
    Vector2D operator+(const Vector2D &v) const;
};

// 重载+操作符，用于Vector2D对象的相加
Vector2D Vector2D::operator+(const Vector2D &v) const
{
    return Vector2D(x + v.x, y + v.y);
}

int main()
{
    Vector2D v1(1, 2), v2(3, 4);
    Vector2D v3 = v1 + v2;
    std::cout << v3.x << " " << v3.y; // output: 4 6
    return 0;
}
