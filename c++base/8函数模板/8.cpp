#include <iostream>
#include <utility> // For std::index_sequence and std::make_index_sequence
#include <type_traits> // For std::common_type_t  For std::is_arithmetic

// 辅助函数，用于非递归求和
template<typename... Args, typename = std::enable_if_t<(std::conjunction_v<std::is_arithmetic<Args>...>)>>
auto sum(Args... args) -> typename std::common_type_t<Args...> {
    return (args + ...); // C++17 折叠表达式
}

// 重载版本，处理空参数包的情况
auto sum() -> int { // 返回类型统一为 int
    return 0;
}

// 静态断言，确保所有参数都是算术类型
template<typename... Args>
constexpr bool all_arithmetic() {
    return (std::conjunction_v<std::is_arithmetic<Args>> && ...);
}

int main() {
    static_assert(all_arithmetic<int, int, int, int, int>(), "All arguments must be arithmetic types");
    static_assert(all_arithmetic<int, double>(), "All arguments must be arithmetic types");

    std::cout << "Sum: " << sum(1, 2, 3, 4, 5) << std::endl; // 应输出 Sum: 15
    std::cout << "Sum: " << sum(1, 2, 3, 4, 5, 5.5) << std::endl; // 应输出 Sum: 20.5
    std::cout << "Sum: " << sum(1, 2, 3, 4, 5, 5.5,6.5) << std::endl; // 应输出 Sum: 20.5
    std::cout << "Sum: " << sum() << std::endl; // 应输出 Sum: 0

    // 下面的调用会导致编译错误，因为参数不是算术类型
    // std::cout << "Sum: " << sum("a", "b") << std::endl;

    return 0;
}