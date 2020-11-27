#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Teacher
{
public:
	Teacher();
	~Teacher();
	virtual void _Input(bool);
	virtual void _Count();
	virtual double _Calculate_Salary();
	virtual bool _Role_Teacher();
	virtual bool _Find_ID_Teacher(int);
	virtual bool _Find_Name_Teacher(string);
	virtual int _Find_Day_Off();

private:
	int ID;
	string NameTeacher;
	int Coefficient;
	int baseSalary;
	int DayOff;
	bool StyleTeacher = false;

};
