
// char &operator[](size_t n);                  // 返回容器中第n个元素，不提供范围检查。[]重载运算符，返回引用。
// char &at(size_t n);                          // 返回容器中第n个元素，提供范围检查。
// const char *c_str() const;                   // 返回容器中动态数组的首地址，语义：寻找以null结尾的字符串。
// const char *data() const;                    // 返回容器中动态数组的首地址，语义：只关心容器中的数据。
// int copy(char *s, int n, int pos = 0) const; // 把当前容器中的内容，从pos开始的n个字节拷贝到s中，返回实际拷贝的数目。
/**
 * @file 3.cpp
 * @author liudehua
 * @brief 
 * @version 0.1
 * @date 2024-05-23
 * 字符操作
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
using namespace std;
int main()
{
     string s("0123456789");
     cout << "s.c_str() = " << s.c_str() << endl;
     cout << "s.data() = " << s.data() << endl;
     cout << "s[0] = " << s[0] << endl;
     cout << "s[0] = " << s[10] << endl;
     cout << "s.at(5) = " << s.at(5) << endl;
     //     cout << "s.at(10) = " << s.at(10) << endl;
     char buf[1024];
     int len = s.copy(buf, 5, 2); // 拷贝s中从第2个元素开始的5个元素到buf中。
     cout << "len = " << len << endl;
     cout << "buf = " << buf << endl;
     return 0;
}