#ifndef _DATA_H__
#define _DATA_H__
class Data
{
private:
    int num;

public:
    Data(int n = 0);
    void setNum(int n);
    int getNum();
    void print();
};
#endif