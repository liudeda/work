#include <cstdlib>
#include <iostream>

using namespace std;

// 普通函数
int Max(int a, int b)
{
    cout<<"int Max(int a, int b)"<<endl;
    return a > b ? a : b;
}

// 函数模板（两个参数）
template<typename T>
T Max(T a, T b)
{
    cout<<"T Max(T a, T b)"<<endl;
    return a > b ? a : b;
}

// 函数模板（三个参数）
template<typename T>
T Max(T a, T b, T c)
{
    cout<<"T Max(T a, T b, T c)"<<endl;
    return Max(Max(a, b), c);
}


int main(int argc, char *argv[])
{
    int a = 1;
    int b = 2;

    cout<<Max(a, b)<<endl;      // 规则①：普通函数完全匹配，优先调用普通函数
    cout<<Max<>(a, b)<<endl;    // 规则③：空 <> 强制只考虑模板

    cout<<Max(3.0, 4.0)<<endl;  // 规则②：模板生成 double 版本更合适

    cout<<Max(5.0, 6.0, 7.0)<<endl; // 参数个数只能匹配三参模板

    cout<<Max('a', 100)<<endl;  // 类型不一致：模板不匹配，只能走普通函数

    cout << "Press the enter key to continue ...";
    cin.get();
    return EXIT_SUCCESS;
}
