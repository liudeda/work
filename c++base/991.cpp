// 设计一个计算长方形体积的程序
#include <iostream>
using namespace std;

#include "include/include.h"

void Rectangle::setLength(int len)
{
    length = len;
}
void Rectangle::setWidth(int wid)
{
    width = wid;
}
int Rectangle::getLength()
{
    return length;
}
int Rectangle::getWidth()
{
    return width;
}
void Rectangle::printf_info()
{
    cout << "Long of rectangle is : " << length << endl;
    cout << "Width of rectangle is : " << width << endl;
}

class Rectangle_volume : public Rectangle
{
private:
    int height;

public:
    void setHeight(int hei)
    {
        height = hei;
    }
    int getHeight()
    {
        return height;
    }
    void printf_info()
    {
        Rectangle::printf_info();
        cout << "Height of rectangle is : " << height << endl;
    }
    void printf_volume()
    {
        cout << "The volume of rectangle is : " << getLength() * getWidth() * getHeight() << endl;
    }
};
int main()
{
    Rectangle_volume rv;
    rv.setLength(10);
    rv.setWidth(20);
    rv.setHeight(30);
    rv.printf_info();
    rv.printf_volume();
    return 0;
}