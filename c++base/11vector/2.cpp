#include <iostream>
#include <vector>
#include <algorithm> // 引入sort函数

int main()
{
     // 创建并初始化一个vector
     std::vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6};

     // 添加元素
     numbers.push_back(8);                   // 在末尾添加8
     numbers.insert(numbers.begin() + 3, 0); // 在位置3前插入0
                                             // 遍历并打印vector
     std::cout << "Vector elements before sorting:\n";
     for (int num : numbers)
     {
          std::cout << num << " ";
     }
     std::cout << "\n";
     // 访问元素
     std::cout << "The third element is: " << numbers[2] << std::endl;      // 访问第三个元素
     std::cout << "The last element is: " << numbers.back() << std::endl;   // 访问最后一个元素
     std::cout << "The first element is: " << numbers.front() << std::endl; // 访问最后一个元素
     // 排序
     std::sort(numbers.begin(), numbers.end());
     // 再次遍历并打印（已排序）
     std::cout << "Vector elements after sorting:\n";
     for (int num : numbers)
     {
          std::cout << num << " ";
     }
     std::cout << "\n";
     // 降序排序
     std::sort(numbers.begin(), numbers.end(), std::greater<int>());
     // 再次遍历并打印（已降序）
     std::cout << "Vector elements after descending sorting:\n";
     for (int num : numbers)
     {
          std::cout << num << " ";
     }
     std::cout << "\n";

     // 查找并删除一个元素
     auto it = std::find(numbers.begin(), numbers.end(), 0);
     if (it != numbers.end())
     {
          numbers.erase(it);
     }

     // 验证0是否已被删除
     bool containsZero = std::find(numbers.begin(), numbers.end(), 0) != numbers.end();
     std::cout << "Does the vector contain 0? " << (containsZero ? "Yes" : "No") << std::endl;
     

     return 0;
}