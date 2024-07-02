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
    cout << "职工编号" << m_Id
         << "\t职工编号" << m_Name
         << "\t部门编号" << m_DeptId << endl;
}