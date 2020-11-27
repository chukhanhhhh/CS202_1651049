#pragma once
#include "Staff.h"

class ProductionStaff: public Staff
{
public:
	ProductionStaff();

	~ProductionStaff();

	void _Input();
	void _Count();
	virtual double _Calculate_Salary();

private:
	int productions;
};
