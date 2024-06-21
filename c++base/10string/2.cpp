/*************************************************************************
 * *************************************************************************
size_t max_size() const;             // 返回string对象的最大长度string::npos，此函数意义不大。
size_t capacity() const;             // 返回当前容量，可以存放字符的总数。
size_t length() const;               // 返回容器中数据的大小（字符串语义）。
size_t size() const;                 // 返回容器中数据的大小（容器语义）。
bool empty() const;                  // 判断容器是否为空。1.容器为空，返回true；2.容器不为空，返回false。

void clear();                        // 清空容器，清空后，size()将返回0。
void shrink_to_fit();                // 将容器的容量降到实际大小（需要重新分配内存）。
void reserve(size_t size = 0);       // 将容器的容量设置为至少size。
void resize(size_t len, char c = 0); // 把容器的实际大小置为len，如果len<实际大小，会截断多出的部分；如果len>实际大小，
                                        就用字符c填充。resize()后，length()和size()将返回len。
************************************************************************************
*************************************************************************************/
// 特性操作
#include <iostream>
using namespace std;
int main()
{
     string s1("0123456789");
     cout << "s1.max_size() = " << s1.max_size() << endl;
     cout << "s1.capacity() = " << s1.capacity() << endl;
     cout << "s1.length() = " << s1.length() << endl;
     cout << "s1.size() = " << s1.size() << endl;
     cout << "s1.empty() = " << s1.empty() << endl;
     s1.clear();
     cout << "s1.empty() = " << s1.empty() << endl;
     //s1.shrink_to_fit();
     s1.reserve(20);
     s1.resize(5, 'a');
     cout << "s1 = " << s1 << endl;
     return 0;
}
