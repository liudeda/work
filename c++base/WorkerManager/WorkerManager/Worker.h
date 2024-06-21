#pragma once
#include<iostream>
#include<string>
using namespace std;


class Worker
{
private:
			int m_Id; 
	string m_Name; 
	int m_DeptId; 
public:
	virtual string getDeptName() = 0;
	void showInfo();
	Worker(int id, string name, int deptId);
	~Worker();

};