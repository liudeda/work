#include <iostream>
#include <deque>
#include <algorithm> // 引入sort和find算法
#include <iterator>  // 引入next和prev函数

int main()
{
     // 创建并初始化deque
     std::deque<int> numbers({3, 1, 4, 1, 5, 9, 2, 6});

     // 添加元素
     numbers.push_back(8);      // 在末尾添加
     numbers.push_front(0);     // 在前端添加
     auto it = numbers.begin(); // 获取起始迭代器
     std::advance(it, 2);       // 移动迭代器到第3个位置
     numbers.insert(it, 2, 7);  // 在该位置插入两个7

     // 访问元素
     std::cout << "Front: " << numbers.front() << ", Back: " << numbers.back() << std::endl; // front()和back()函数分别返回第一个元素和最后一个元素
     std::cout << "Element at index 5: " << numbers[5] << std::endl;                         // 访问第6个元素

     // 遍历deque
     std::cout << "Original deque: ";
     for (const auto &num : numbers)
     {
          std::cout << num << " ";
     }
     std::cout << std::endl;

     // 查找并输出某个值的迭代器
     it = std::find(numbers.begin(), numbers.end(), 7);
     if (it != numbers.end())
          std::cout << "Found 7 at position: " << std::distance(numbers.begin(), it) << std::endl;

     // 删除操作
     numbers.pop_back();  // 删除最后一个元素
     numbers.pop_front(); // 删除第一个元素
     numbers.erase(it);   // 删除找到的第一个7

     // 修改元素
     numbers[2] = 42; // 直接修改

     // 排序
     std::sort(numbers.begin(), numbers.end());

     // 容量和大小
     std::cout << "Size: " << numbers.size() << ", Capacity (not directly accessible in standard deque)" << std::endl;

     // // 预留空间
     // // numbers.reserve(20);
     // numbers.resize(20, 1);

     // 再次遍历deque
     std::cout << "After modifications and sorting: ";
     for (const auto &num : numbers)
     {
          std::cout << num << " ";
     }
     std::cout << std::endl;

     // 清空deque
     numbers.clear();

     // 检查是否为空
     if (numbers.empty())
          std::cout << "Deque is now empty." << std::endl;

     return 0;
}