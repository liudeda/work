#include <iostream>
#include <map>

int main()
{
     // 定义并初始化 map
     std::map<std::string, int> myMap = {{"apple", 1}, {"banana", 2}, {"cherry", 3}};
     /**
      * @brief std::make_pair: 这是一个模板函数，用于创建一个std::pair对象。std::pair是一个结构体模板，用于存储一对值，
      * 这里的一对值分别是键和值。std::make_pair接受两个参数，分别用于初始化std::pair的第一个和第二个成员。
      */
     // 插入元素
     myMap.insert(std::make_pair("orange", 4));
     myMap["grape"] = 5;
     myMap.insert(std::pair<std::string, int>("peach", 6));
     // 遍历打印
     for (const auto &pair : myMap)
     {
          std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
     }
     // 查找元素
     auto it = myMap.find("banana");
     if (it != myMap.end())
     {
          std::cout << "Found: " << it->first << " with value " << it->second << std::endl;
     }
     else
     {
          std::cout << "Not found" << std::endl;
     }

     // 访问元素
     std::cout << "Value of banana: " << myMap["banana"] << std::endl;
     myMap["banana"] = 10;
     std::cout << "New value of banana: " << myMap["banana"] << std::endl;

     // 删除元素
     myMap.erase("banana");

     // 遍历 map
     for (const auto &pair : myMap)
     {
          std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
     }

     // 检查 map 是否为空
     if (myMap.empty())
     {
          std::cout << "Map is empty" << std::endl;
     }
     else
     {
          std::cout << "Map is not empty" << std::endl;
     }

     // 获取 map 的大小
     std::cout << "Size of map: " << myMap.size() << std::endl;
     // 清空 map
     myMap.clear();
     std::cout << "Size of map after clear: " << myMap.size() << std::endl;

     return 0;
}