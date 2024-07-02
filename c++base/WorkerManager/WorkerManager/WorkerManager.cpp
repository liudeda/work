

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
    cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
    cout << "*************  0.�˳��������  *************" << endl;
    cout << "*************  1.����ְ����Ϣ  *************" << endl;
    cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
    cout << "*************  3.ɾ����ְְ��  *************" << endl;
    cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
    cout << "*************  5.����ְ����Ϣ  *************" << endl;
    cout << "*************  6.���ձ������  *************" << endl;
    cout << "*************  7.��������ĵ�  *************" << endl;
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