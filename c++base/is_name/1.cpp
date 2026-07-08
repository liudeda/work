#include <iostream>
#include <type_traits>

int main()
{
    // 检查 int 和 int 是否相同
    std::cout << "Is int the same as int? " << std::is_same<int, int>::value << '\n';

    // 检查 int 和 double 是否相同
    std::cout << "Is int the same as double? " << std::boolalpha << std::is_same<int, double>::value << '\n';

    return 0;
}