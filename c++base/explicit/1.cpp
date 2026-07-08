#include <iostream>
#include <list>
#include <algorithm> // 用于sort

/**
 * @brief 主函数
 *
 * 创建一个整数类型的双向链表，并对其进行一系列操作，包括添加元素、遍历、删除元素和排序。
 *
 * @return 返回值始终为0，表示程序正常结束
 */
int main()
{
     std::list<int> myList;

     myList.push_back(3);              // 添加到末尾
     myList.push_front(1);             // 添加到开头
     myList.insert(myList.begin(), 2); // 插入到指定位置
     std::cout << "Initial list: ";
     for (int val : myList)
          std::cout << val << " "; // 遍历链表
     std::cout << std::endl;

     myList.remove(2);  // 移除所有值为2的元素
     myList.pop_back(); // 删除最后一个元素
     myList.sort();     // 自动排序，需定义<运算符或传递比较函数
     std::cout << "After operations: ";
     for (int val : myList)
          std::cout << val << " ";
     std::cout << std::endl;

     return 0;
}