#pragma once
#include "Staff.h"

class JapaneseStaff : public Staff
{
public:
	JapaneseStaff();
	JapaneseStaff(const JapaneseStaff& J);
	~JapaneseStaff();
	void _Input();
	void _Count();
	virtual double _Calculate_Salary();

private:
	double _Base_Salary;
	double _number;
};
