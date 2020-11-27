#pragma once
#include "Reader.h"

class BaseReader : public Reader
{
public:
	void _Input();
	void _Count();
	double _Calculate_Fee();
private:
	int NumberOfBookBorrowed;
};
