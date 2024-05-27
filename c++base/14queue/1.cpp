#include <iostream>
#include <queue>

int main()
{
     std::queue<int> q;

     // 插入元素
     q.push(10);
     q.push(20);
     q.push(30);
     // 输出队列大小
     std::cout << "Queue size: " << q.size() << std::endl;

     while (!q.empty()) // 判断队列是否为空
     {

          std::cout << "Queue front: " << q.front();            // 访问对头但不移除队头元素
          std::cout << "Queue back: " << q.back() << std::endl; // 访问队尾但不移除队头元素
          std::cout << "  Queue size: " << q.size() << std::endl;
          q.pop(); // 移除队头元素
     }
     std::cout << "Queue size: " << q.size() << std::endl;

     return 0;
}
