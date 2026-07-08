#include <iostream>

// 定义一个模板函数，使用折叠表达式计算参数的累加和
template<typename... Args>
auto sum(Args... args) {
    // 打印参数列表
    ((std::cout << args << " + "), ...);
    return (args + ...);
    //为什么能递归调用了？

}
template<typename... Args>
auto product(Args... args) {
    // 打印参数列表
    ((std::cout << args << " * "), ...);
    return (args * ...);
}   

// 重载函数，处理没有参数的情况
double sum() {
    return 0;
}

int main() {
    std::cout << "Sum: " << sum(1, 2, 3, 4, 5) << std::endl; // 输出: Sum: 15
    std::cout << "product: " << product(1, 2, 3, 4, 5) << std::endl; // 输出: Sum: 15
    std::cout << "Sum: " << sum(1.1, 2.2, 3.3) << std::endl; // 输出: Sum: 6.6
    std::cout << "Sum: " << sum() << std::endl; // 输出: Sum: 0
    return 0;
}