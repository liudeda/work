#include <iostream>

// 使用尾随返回类型指定返回类型为int
auto add(int a, int b) -> int {
    return a + b;
}

int main() {
    std::cout << "Sum of 3 and 5 is: " << add(3, 5) << std::endl;
    return 0;
}