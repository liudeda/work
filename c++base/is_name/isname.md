- `std::is_same` 是 C++ 标准库中 `<type_traits>` 头文件提供的一个类型特征类模板。它用于在编译时检查两个类型是否相同，如果相同则提供一个静态常量 `value` 为 `true`（即 `1`），否则为 `false`（即 `0`）。`std::is_same` 在模板编程、重载选择以及条件编译等场景下非常有用。
  
下面是几个 `std::is_same` 的使用示例：
  
  ### 示例 1：基本用法
  
  ```cpp
  #include <iostream>
  #include <type_traits>
  
  int main() {
      // 检查 int 和 int 是否相同
      std::cout << "Is int the same as int? "
                << std::boolalpha << std::is_same<int, int>::value << '\n';
  
      // 检查 int 和 double 是否相同
      std::cout << "Is int the same as double? "
                << std::boolalpha << std::is_same<int, double>::value << '\n';
  
      return 0;
  }
  ```
  
  ### 示例 2：与 `decltype` 结合使用
  
  ```cpp
  #include <iostream>
  #include <type_traits>
  
  void checkType(int) {
      std::cout << "The type is int\n";
  }
  
  void checkType(double) {
      std::cout << "The type is double\n";
  }
  
  int main() {
      int a = 42;
      double b = 3.14;
  
      // 使用 decltype 来获取变量的类型，并与 int 或 double 进行比较
      if (std::is_same<decltype(a), int>::value) {
          checkType(a);
      }
  
      if (std::is_same<decltype(b), double>::value) {
          checkType(b);
      }
  
      return 0;
  }
  ```
  
  ### 示例 3：模板函数中的使用
  
  ```cpp
  #include <iostream>
  #include <type_traits>
  
  template <typename T>
  void print_if_int(T value) {
      if constexpr (std::is_same<T, int>::value) {
          std::cout << "The value is an integer: " << value << '\n';
      } else {
          std::cout << "The value is not an integer.\n";
      }
  }
  
  int main() {
      print_if_int(42);      // 应该打印出整数值
      print_if_int(3.14);    // 应该指出这不是一个整数
  
      return 0;
  }
  ```
  
  ### 示例 4：C++17 及以后的简化语法
  
  从 C++17 开始，可以使用更简洁的语法来表达相同的意思：
  
  ```cpp
  #include <iostream>
  #include <type_traits>
  
  int main() {
      // 使用 C++17 的 bool_constant 简化语法
      std::cout << "Is int the same as int? "
                << std::boolalpha << std::is_same_v<int, int> << '\n';
  
      // 使用 C++17 的 bool_constant 简化语法
      std::cout << "Is int the same as double? "
                << std::boolalpha << std::is_same_v<int, double> << '\n';
  
      return 0;
  }
  ```
  
  这里，`std::is_same_v<T, U>` 是 `std::is_same<T, U>::value` 的别名，提供了更加直观和简短的写法。
  
  这些例子展示了如何在不同的上下文中使用 `std::is_same` 来进行类型的比较。根据你的需求，你可以将它融入到更复杂的模板逻辑或条件编译中。  这个示例展示了如何创建一个队列，向其中添加元素，访问队头元素，以及移除队头元素。
