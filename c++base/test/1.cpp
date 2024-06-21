#include <iostream>
class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle() { std::cout << "non-parameter constructor  Rectangle object created " << std::endl; };
    Rectangle(double l, double w);
    double getArea();
    void print_info();
    int set_length(double l);
    int set_width(double w);
    double get_length();
    double get_width();
};

Rectangle::Rectangle(double l, double w) : length(l), width(w) // 初始化列表 用于初始化成员变量
{
    std::cout << "parameter constructor  Rectangle object created " << std::endl;
}

double Rectangle::getArea()
{
    return length * width;
}
void Rectangle::print_info()
{
    std::cout << "length:" << length << std::endl;
    std::cout << "width:" << width << std::endl;
    std::cout << "area:" << getArea() << std::endl;
}
int Rectangle::set_length(double l)
{
    if (l > 0)
    {
        length = l;
        return 0;
    }
    else
    {
        return -1;
    }
}
int Rectangle::set_width(double w)
{
    if (w > 0)
    {
        width = w;
        return 0;
    }
    else
    {
        return -1;
    }
}
double Rectangle::get_length()
{
    return length;
}
double Rectangle::get_width()
{
    return width;
}
class Box : public Rectangle
{
private:
    double height;

public:
    // 继承中 先调用父类构造函数，再调用子类构造函数，析构顺序与构造相反
    Box(double l, double w, double h) : Rectangle(l, w), height(h) // 初始化列表 用于初始化成员变量
    {
        std::cout << "Box object created" << std::endl;
    }
    // Box(double l, double w, double h)//构造函数//父类將调用无参构造函数
    // {
    //     set_height(h);
    //     set_length(l);
    //     set_width(w);
    //     std::cout << "Box object created" << std::endl;
    // }
    double get_volume()
    {
        return get_length() * get_width() * height;
    }
    void print_info()
    {
        Rectangle::print_info();
        std::cout << "height:" << height << std::endl;
        std::cout << "volume:" << get_volume() << std::endl;
    }
    double get_height()
    {
        return height;
    }
    int set_height(double h)
    {
        if (h > 0)
        {
            height = h;
            return 0;
        }
        else
        {
            return -1;
        }
    }
};
int main()
{
    Rectangle r(3, 4);
    r.print_info();
    r.set_length(5);
    r.set_width(6);
    r.print_info();
    Box b(3, 4, 5);
    b.print_info();
    b.set_height(6);
    b.print_info();
    return 0;
}