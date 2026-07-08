#include <tuple>
#include <iostream>

int main() {
    auto t1 = std::make_tuple(1, 2.5, "Hello");

    // 访问元组中的元素
    int i = std::get<0>(t1); // 1
    double d = std::get<1>(t1); // 2.5
    const char* s = std::get<2>(t1); // "Hello"

    std::cout << "i: " << i << ", d: " << d << ", s: " << s << std::endl;

    return 0;
}