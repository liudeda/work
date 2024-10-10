#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
     std::vector<int> vec{0, 1, 2, 3}; // 初始化向量
     // 添加元素
     vec.push_back(4);
     vec.push_back(5);
     vec.push_back(6);

     // 修改元素
     vec[0] = 10;
     // 访问元素
     std::cout << "First element: " << vec[0] << std::endl;
     std::cout << "Second element: " << vec.at(1) << std::endl;
     // 遍历向量
     std::cout << "Elements: " << std::endl;
     // 遍历方法1：
     for (int value : vec) // 语法：for(元素类型 元素变量 : 容器) {循环体} 作用：遍历容器中的元素,不支持修改元素,只读.
     {
          std::cout << value << " ";
     }
     std::cout << std::endl;
     // 遍历方法2：
     for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
     {
          std::cout << *it << " ";
     }
     std::cout << std::endl;
     // 遍历方法3：
     for (int i = 0; i < vec.size(); ++i)
     {
          std::cout << vec[i] << " ";
     }
     std::cout << std::endl;
     // 遍历方法4：#include <algorithm>
     for_each(vec.begin(), vec.end(), [](int value)
              { std::cout << value << " "; });
     // for_each()函数是STL中的一个算法，用于遍历容器中的元素，它的第一个参数是容器的起始迭代器，第二个参数是容器的结束迭代器，
     //  第三个参数是一个函数对象，用于处理容器中的每一个元素。
     // [](int value) { std::cout << value << " "; }// 匿名函数，lambda表达式
     std::cout << std::endl;

     // 删除元素
     vec.pop_back();         // 删除最后一个元素
     vec.erase(vec.begin()); // 删除第一个元素
     for_each(vec.begin(), vec.end(), [](int value)
              { std::cout << value << " "; });
     std::cout << std::endl;

     vec.erase(vec.begin() + 3, vec.end());
     for_each(vec.begin(), vec.end(), [](int value)
              { std::cout << value << " "; });
     std::cout << std::endl;

     // 显示大小和容量
     std::cout << "Size: " << vec.size() << std::endl;
     std::cout << "Capacity: " << vec.capacity() << std::endl;

     // 清空向量
     vec.clear();
     std::cout << "Is empty: " << vec.empty() << std::endl;

     return 0;
}