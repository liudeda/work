#include <iostream>
#include <stack>

int main()
{
     std::stack<int> mystack;
     // 入栈操作
     mystack.push(10);
     mystack.push(20);
     mystack.push(30);
     std::cout << "size: " << mystack.size() << std::endl;
     while (!mystack.empty()) // 判断栈是否为空
     {
          std::cout << mystack.top() << " "; // 访问栈顶元素
          mystack.pop();                     // 出栈操作
     }
     std::cout << std::endl;
     std::cout << "stack is empty" << std::endl;

     return 0;
}