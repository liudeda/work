/**
 * @file 6.cpp
 * @author your name (you@domain.com)
 * @brief 多参数模版函数的使用
 * @version 0.1
 * @date 2024-12-24
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <utility>

template <typename... T> // 这里的 `typename... T` 表示模板参数包（parameter pack），可以包含零个或多个类型。
void print(T... args)    // 可以理解成 T...是变量类型。args是变量名。在函数中，T... args表示可变参数列表，可以传入任意数量的参数。
{
    try
    {
        // 打印参数个数
        std::cout << "params: " << sizeof...(args) << std::endl;
        // 打印第一个参数
        // 在编译期判断参数个数是否大于0
        if constexpr (sizeof...(args) > 0)
        {
            // args...表示参数包的元素，通过make_tuple()函数创建一个元组，然后通过get()函数获取第一个元素。
            std::cout << "First: " << std::get<0>(std::make_tuple(args...)) << std::endl;
        }
        else
        {
            std::cout << "First: (no arguments)" << std::endl;
        }

        // 打印最后一个参数
        if constexpr (sizeof...(args) > 0)
        {
            std::cout << "Last: " << std::get<sizeof...(args) - 1>(std::make_tuple(args...)) << std::endl;
        }
        else
        {
            std::cout << "Last: (no arguments)" << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
int main()
{
    print(1, 2, 3, 4, 5);
    print(1.5, 2, 3, 4, 2.5, 3, 4);
    print("hello", "world");
    print();
    return 0;
}
