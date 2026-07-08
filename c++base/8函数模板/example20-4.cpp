#include <cstdlib>
#include <iostream>

using namespace std;

// 多个类型参数：返回类型 RT 放在最前面，方便调用时只显式指定它
template<typename RT, typename T1, typename T2>
RT Add(T1 a, T2 b)
{
    return static_cast<RT>(a + b);
}


int main(int argc, char *argv[])
{
    cout<<Add<double, char, float>('a', 100.0f)<<endl;  // 三种类型全部显式写出
    cout<<Add<double>('a', 100.0f)<<endl;               // 只写返回类型，其余自动推导

    cout << "Press the enter key to continue ...";
    cin.get();
    return EXIT_SUCCESS;
}
