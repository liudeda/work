/**
 * @file 4.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-05-22
 * 类的模版
 * @copyright Copyright (c) 2024
string &operator=(const string &str);                               // 把容器str赋值给当前容器。
string &assign(const char *s);                                      // 将string对象赋值为s指向的NBTS。
string &assign(const string &str);                                  // 将string对象赋值为str。
string &assign(const char *s, size_t n);                            // 将string对象赋值为s指向的地址后n字节的内容。
string &assign(const string &str, size_t pos = 0, size_t n = npos); // 将sring对象赋值为str从位置pos开始到结尾的字符（或从位置pos开始的n个字符）。
template <class T>                                                  //
string &assign(T begin, T end);                                     // 将string对象赋值为区间[begin,end]内的字符。
string &assign(size_t n, char c);                                   // 将string对象赋值为由n个字符c。
 *
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
     string s1("0123456789");
     string s2;
     s2 = s1;
     cout << "s2 = " << s2 << endl;

     s2.assign("hello world");
     cout << "s2 = " << s2 << endl;

     s2.assign(s1);
     cout << "s2 = " << s2 << endl;

     s2.assign("hello world", 5);
     cout << "s2 = " << s2 << endl;
     s2.assign("hello world", 3, 5);
     cout << "s2 = " << s2 << endl;

     s2.assign(s1, 3);
     cout << "s2 = " << s2 << endl;
     s2.assign(s1, 3, 6);
     cout << "s2 = " << s2 << endl;
     s1 = "1234567890";

     s2.assign(s1.begin() + s1.find('3'), s1.end());
     cout << "s2 = " << s2 << endl;
     //
     s2.assign(s1, s1.find('3'), s1.npos); // npos是string类的一个静态成员，表示一个最大的可能的长度值。
     cout << "s2 = " << s2 << endl;

     s2.assign(8, 'x');
     cout << "s2 = " << s2 << endl;
     return 0;
}
