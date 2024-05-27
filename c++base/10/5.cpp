/*****************************************************************************
五、连接操作
把内容追加到已存在容器的后面。
1）string &operator+=(const string &str);               // 把容器str连接到当前容器。
2）string & append(const char *s);                      // 把指向s的NBTS连接到当前容器。
3）string & append(const string &str);                  // 把容器str连接到当前容器。
4）string & append(const char *s, size_t n);            // 将s指向的地址后n字节的内容连接到当前容器。
6）template < class T > string &append(T begin, T end); // 将区间[begin,end]内的字符连接到容器。
7）string & append(size_t n, char c);                   // 将n个字符c连接到当前容器。
5）string & append(const string &str, size_t pos = 0, size_t n = npos);
// 将str从位置pos开始到结尾的字符（或从位置pos开始的n个字符）连接到当前容器。
8)void swap(string &str);                               // 把当前容器与str交换。
如果数据量很小，交换的是动态数组中的内容，如果数据量比较大，交换的是动态数组的地址。
9)string substr(size_t pos = 0,size_t n = npos) const; // 返回pos开始的n个字节组成的子容器。

**************************************************************************************************/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    // 1）string &operator+=(const string &str);               // 把容器str连接到当前容器。
    string s = "0";
    s += "1";
    cout << "1)" << s << endl;
    // 2）string & append(const char *s);                      // 把指向s的NBTS连接到当前容器。
    char str[] = "2";
    s.append(str);
    cout << "2)" << s << endl;
    // 3）string & append(const string &str);                  // 把容器str连接到当前容器。
    string str2 = "3";
    s.append(str2);
    cout << "3)" << s << endl;
    // 4）string & append(const char *s, size_t n);            // 将s指向的地址后n字节的内容连接到当前容器。
    s.append("456iii", 2);
    cout << "4)" << s << endl;
    // 6）template < class T > string &append(T begin, T end); // 将区间[begin,end]内的字符连接到容器。
    str2 = "6789";
    s.append(str2.begin(), str2.end() - 2);
    cout << "6)" << s << endl;
    // 5）string & append(const string &str, size_t pos = 0, size_t n = npos);
    string str3 = "89";
    s.append(str3, 0, str3.npos); // npos是string类的一个静态成员，表示一个最大的可能的长度值。
    cout << "5)" << s << endl;
    // 7）string & append(size_t n, char c);                   // 将n个字符c连接到当前容器。
    s.append(5, '!');
    cout << "7)" << s << endl;
    // 8)void swap(string &str);                               // 把当前容器与str交换。
    s.swap(str3);
    cout << "8) s=" << s << endl;
    cout << "8) str3=" << str3 << endl;
    // 9)string substr(size_t pos = 0,size_t n = npos) const; // 返回pos开始的n个字节组成的子容器。
    string str4 = str3.substr(2, 3);
    cout << "9)" << str4 << endl;
    return 0;
}
