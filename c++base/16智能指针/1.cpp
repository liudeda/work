#include <iostream>
#include <memory> // 引入unique_ptr所需的头文件

// 前向声明，以便于作为unique_ptr的模板参数
class MyClass;

// 一个简单的类，用于演示unique_ptr的使用
class MyClass
{
public:
     MyClass(int value) : m_value(value)
     {
          std::cout << "MyClass object created with value: " << value << std::endl;
     }
     ~MyClass()
     {
          std::cout << "MyClass object destroyed" << std::endl;
     }
     void displayValue() const
     {
          std::cout << "Value: " << m_value << std::endl;
     }

private:
     int m_value;
};

// 使用unique_ptr作为参数的函数示例
void processObject(std::unique_ptr<MyClass> &&ptr)
{
     if (ptr)
     {
          ptr->displayValue();
          // 注意：在此函数内，ptr的所有权被接收，但没有再次转移，
          // 因此ptr会在函数结束时自动删除所指向的对象
     }
}

int main()
{
     // 创建一个unique_ptr指向MyClass的一个新实例
     std::unique_ptr<MyClass> myPtr = std::make_unique<MyClass>(42);

     // 使用unique_ptr
     if (myPtr)
     {
          myPtr->displayValue();
     }

     // 将unique_ptr传递给函数，转移所有权
     processObject(std::move(myPtr)); // 注意使用std::move来转移所有权

     // 此处myPtr已经不再拥有对象，因此不能再次使用
     // 如果尝试调用myPtr->displayValue(); 这里会编译错误或运行时错误

     return 0;
}