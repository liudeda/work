#include <iostream>

// 使用传统风格指定返回类型为int
int add(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Sum of 3 and 5 is: " << add(3, 5) << std::endl;
    return 0;
}