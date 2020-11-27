#pragma once
#include "Teacher.h"
#include "HomeroomTeacher.h"

class University
{
public:
	University();
	~University();

	void _Input_list();
	void _Count_list();
	double _Calculate_Total_Salary();
	void _Find_Max_Salary();
	void _Role_Of_Teacher();
	double _Calculate_Average_Salary();
	void _Find_Teacher_More_Value(int);
	virtual void _Find_ID_Teacher();
	virtual void _Find_Name_Teacher();
	virtual void _Find_Teacher_Day_Off();
private:
	string name;
	vector <Teacher*> teacher;
};
