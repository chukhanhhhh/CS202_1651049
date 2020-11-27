#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Staff
{
public:
	Staff();
	Staff(const Staff& s);
	~Staff();
	virtual void _Input();
	virtual void _Count();
	virtual double _Calculate_Salary();
	virtual double _Find_Average_Salary();
	virtual bool _Cout_TypeOF_Staff();
	virtual void _Find_Staff_Salary_Less_value(int value);
	virtual void _Find_ID_Staff(int);
	virtual void _Find_Name_Staff(string);
	virtual void _Find_Month_Staff(int);

private:
	int _ID;
	string _Name;
	string _Address;
	int _Day, _Month, _Year;
	bool _type;
};

