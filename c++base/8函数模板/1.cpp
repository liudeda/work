#include <iostream>
using namespace std;
template <typename T>
void my_swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 1;
    int b = 2;
    my_swap(a, b);
    cout << "a=" << a << " "
         << "b=" << b << endl;

    float fa = 1.1;
    float fb = 2.2;
    my_swap(fa, fb);
    cout << "fa=" << fa << " "
         << "fb=" << fb << endl;
    fa = 3.1;
    fb = 4.2;
    my_swap<float>(fa, fb);
    cout << "fa=" << fa << " "
         << "fb=" << fb << endl;
    return 0;
}
