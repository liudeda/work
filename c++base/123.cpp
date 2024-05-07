
#include <iostream>
#include <string>

// 定义Person类
class Person
{
public:
    // 构造函数，使用初始化列表
    Person(const std::string &name, int age, double height)
        : name_(name),    // 初始化姓名成员变量
          age_(age),      // 初始化年龄成员变量
          height_(height) // 初始化身高成员变量
    {
    }

    // 为了展示效果，添加一个打印信息的成员函数
    void print_info() const
    {
        std::cout << "Name: " << name_ << ", Age: " << age_ << ", Height: " << height_ << std::endl;
    }

private:
    std::string name_; // 姓名
    int age_;          // 年龄
    double height_;    // 身高
};

int main()
{
    // 使用初始化列表创建Person对象
    Person person{"Alice", 30, 1.65};

    // 打印Person对象信息
    person.print_info();

    return 0;
}

/**

 在C语言中，确实没有内置的string类型。C语言处理字符串主要依赖于字符数组和一些配套的字符串处理函数，这些函数通常位于string.h头文件中（或者<cstring>，它是C++中对string.h的更名版本，以适应命名空间）。以下是C语言中字符串处理的一些特点：

字符数组表示：
字符串在C语言中是由字符数组表示的，即一个连续的字符序列，以空字符\0（称为null terminator）作为结束标志。例如：
c
     char name[] = "Alice"; // 包含字符'A', 'l', 'i', 'c', 'e' 和 '\0'
字符串函数：
C语言提供了如strlen、strcpy、strcat、strcmp等一系列函数来处理字符串，它们通过指针操作字符数组。例如：
c
     size_t length = strlen(name); // 计算字符串长度
     char another_name[] = "Bob";
     strcpy(another_name, name); // 复制字符串
     int comparison = strcmp(name, another_name); // 比较两个字符串
手动管理内存：
使用字符数组意味着程序员需要自己负责分配和释放内存，如果需要动态调整字符串大小，需要手动重新分配内存并复制数据。没有自动的内存管理机制，如垃圾回收。
相比之下，C++引入了std::string类，它是一种封装了字符串操作的高级数据类型，属于C++标准库（STL，Standard Template Library）的一部分。std::string提供了诸多优点：

类封装：
std::string是一个类，它封装了字符串的存储和操作细节。创建一个std::string对象就像操作任何其他C++对象一样简单：
cpp
     #include <string>
     std::string name = "Alice"; // 创建一个string对象
自动内存管理：

std::string内部会自动管理所存储字符串所需的内存。当你修改字符串时（比如插入、删除字符或赋值新字符串），std::string会自动调整内存大小，无需手动管理内存。
丰富的成员函数：

提供了大量的成员函数来进行字符串操作，如获取长度（.length()或.size()）、比较（.compare()）、查找子串（.find()）、拼接（+运算符或.append()）、替换（.replace()）等。这些操作比直接使用C语言字符串函数更直观、安全且不易出错。
兼容C风格字符串：

std::string与C风格字符串可以互相转换。可以使用.c_str()方法获取指向内部C风格字符串（以\0结束的字符数组）的指针，以便与C库函数或其他需要C风格字符串的接口交互。
总的来说，std::string在C++中提供了更高级、更安全、更易于使用的字符串处理能力，减轻了程序员在处理字符串时的负担，尤其是在内存管理和错误预防方面。而C语言中的字符串处理则更为基础和原始，需要开发者对内存管理、指针操作和字符串函数有深入理解。在C++编程中，除非有特定的性能或兼容性需求，一般推荐使用std::string而非C风格字符数组来处理字符串。
 *
 */