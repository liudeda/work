#include <cstdlib>
#include <iostream>

using namespace std;

// 函数模板：一份代码适配所有类型
template<typename T>
void Swap(T& a, T& b)
{
    T t = a;
    a = b;
    b = t;
}

int main(int argc, char *argv[])
{
    int a = 1;
    int b = 2;

    Swap(a, b);                 // 自动类型推导：T = int

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    float fa = 3;
    float fb = 4;

    Swap<float>(fa, fb);        // 显式指定类型：T = float

    cout<<"fa = "<<fa<<endl;
    cout<<"fb = "<<fb<<endl;

    char ca = 'a';
    char cb = 'b';

    Swap(ca, cb);               // 自动类型推导：T = char

    cout<<"ca = "<<ca<<endl;
    cout<<"cb = "<<cb<<endl;

    cout << "Press the enter key to continue ...";
    cin.get();
    return EXIT_SUCCESS;
}
