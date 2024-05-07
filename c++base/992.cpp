// 设计一个计算长方形体积的程序
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    void setLength(int len)
    {
        length = len;
    }
    void setWidth(int wid)
    {
        width = wid;
    }
    int getLength()
    {
        return length;
    }
    int getWidth()
    {
        return width;
    }
    void printf_info()
    {

        // 英文
        cout << "Long of rectangle is : " << length << endl;
        cout << "Width of rectangle is : " << width << endl;
    }
    Rectangle()
    {
        setLength(0);
        setWidth(0);
    }
    Rectangle(int len, int wid)
    {
        setLength(len);
        setWidth(wid);
    }
};
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
    Rectangle_volume()
    {
        setLength(0);
        setWidth(0);
        setHeight(0);
    };
    Rectangle_volume(int len, int wid, int hei):Rectangle(len, wid), height(hei)
    {
        // setLength(len);
        // setWidth(wid);
        // setHeight(hei);
    }
    ~Rectangle_volume()
    {
        cout << "Destructor" << endl;
    };
};
int main()
{
    Rectangle_volume rv;
    rv.setLength(10);
    rv.setWidth(20);
    rv.setHeight(30);
    rv.printf_info();
    rv.printf_volume();

    Rectangle_volume rv1(20, 30, 40);
    rv1.printf_info();
    rv1.printf_volume();
    return 0;
}