#include <iostream>
using namespace std;
class Data
{
public:
    int num;
    Data(int n)
    {
        num = n;
    }
    void print()
    {
        cout << num << endl;
    }
    void setNum(int n)
    {
        num = n;
    }
    int getNum()
    {
        return num;
    }
};

int main()
{
    Data d(10);
    d.print();
    cout << "num = " << d.getNum() << endl;
    cout << "Data class size " << sizeof(Data)
         << "num size " << sizeof(Data::num) << endl;
    cout << "d size " << sizeof(d) << endl;
}
