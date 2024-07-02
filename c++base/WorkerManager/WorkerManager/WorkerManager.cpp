

#include "WorkerManager.h"

#include <iostream>
#include <limits>
using namespace std;
class WorkerManager
{
public:
    WorkerManager();
    ~WorkerManager();
    void show_menu();
};

WorkerManager::WorkerManager()
{
    std::cout << "WorkerManager object created" << std::endl;
}

WorkerManager::~WorkerManager()
{
    std::cout << "WorkerManager object destroyed" << std::endl;
}

void WorkerManager::show_menu()
{
    cout << "********************************************" << endl;
    cout << "*********  欢迎使用职工管理系统！ **********" << endl;
    cout << "*************  0.退出管理程序  *************" << endl;
    cout << "*************  1.增加职工信息  *************" << endl;
    cout << "*************  2.显示职工信息  *************" << endl;
    cout << "*************  3.删除离职职工  *************" << endl;
    cout << "*************  4.修改职工信息  *************" << endl;
    cout << "*************  5.查找职工信息  *************" << endl;
    cout << "*************  6.按照编号排序  *************" << endl;
    cout << "*************  7.清空所有文档  *************" << endl;
    cout << "********************************************" << endl;
    cout << endl;
}
int main()
{
    WorkerManager wm;
    int choice = 0;
    do
    {
        wm.show_menu();
        cin >> choice;
        switch (choice)
        {
        case 0:
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        default:
            break;
        }

    } while (choice != 0);
    return 0;
}