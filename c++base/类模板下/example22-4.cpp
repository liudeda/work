#include <cstdlib>
#include <iostream>

using namespace std;

// 通用定义：从 1 加到 N，等于 从 1 加到 (N-1) 的和 再加 N
template<int N>
class Sum
{
public:
    static const int VALUE = Sum<N - 1>::VALUE + N;
};

// 特化：递归的终点，从 1 加到 1 就是 1
template<>
class Sum<1>
{
public:
    static const int VALUE = 1;
};

int main(int argc, char *argv[])
{
    cout<<Sum<10>::VALUE<<endl;
    cout<<Sum<100>::VALUE<<endl;

    cout << "Press the enter key to continue ...";
    cin.get();
    return EXIT_SUCCESS;
}
