#include "data.h"
#include <iostream>
void Data::setNum(int num)
{
    this->num = num;
}
int Data::getNum()
{
    return this->num;
}
void Data::print()
{
    std::cout << "num: " << this->num << std::endl;
}
Data::Data(int n)
{
    this->num = n;
}
