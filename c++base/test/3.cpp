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
        cout << "请输入您的选择：" << endl;
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "欢迎下次使用！" << endl;
            break;
        case 1:
            cout << "您选择了增加职工信息" << endl;
            break;
        case 2:
            cout << "您选择了显示职工信息" << endl;
            break;
        case 3:
            cout << "您选择了删除离职职工" << endl;
            break;
        case 4:

            cout << "您选择了修改职工信息" << endl;
            break;
        case 5:
            cout << "您选择了查找职工信息" << endl;
            break;
        case 6:
            cout << "您选择了按照编号排序" << endl;
            break;
        case 7:
            cout << "您选择了清空所有文档" << endl;
            break;
        default:
            cout << "输入有误，请重新输入" << endl;
            break;
        }

    } while (choice != 0);
    return 0;
}