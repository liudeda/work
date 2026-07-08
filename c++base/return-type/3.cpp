#include <iostream>
#include <type_traits> // for std::is_same

// 模板函数使用decltype自动推导返回类型
template <typename T, typename U>
auto multiply(T t, U u) -> decltype(t * u) {
    return t * u;
}

// 检查函数用于验证multiply函数的正确性
void check_multiply() {
    int i = 2;
    double d = 3.5;

    auto result1 = multiply(i, i);
    auto result2 = multiply(d, d);

    std::cout << "Is multiply<int,int> returning int? "
              << std::is_same<decltype(result1), int>::value << std::endl;
    std::cout << "Is multiply<double,double> returning double? "
              << std::is_same<decltype(result2), double>::value << std::endl;
}

int main() {
    check_multiply();
    return 0;
}