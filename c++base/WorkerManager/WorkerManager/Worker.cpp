#include "Worker.h"

Worker::Worker(int id, string name, int deptId) : m_Id(id), m_Name(name), m_DeptId(deptId)
{

    cout << "you can Worker object created" << endl;
}

Worker::~Worker()
{
    cout << "Worker object destroyed" << endl;
}
void Worker::showInfo()
{
    cout << "ְ�����" << m_Id
         << "\tְ�����" << m_Name
         << "\t���ű��" << m_DeptId << endl;
}