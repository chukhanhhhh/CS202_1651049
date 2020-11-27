#pragma once
#include "Reader.h"
#include "VipReader.h"
#include "BaseReader.h"

class Library
{
public:
	void _InputList();
	void _CountList();
	double _Total_Fees();
	void _Find_Max_Fees();
	double _Average_Fees();
	void _Check_Type_Reader();
	void _Find_Fees_More_Value(int);
	void _Find_ID_OF_Reader();
	void _Find_Name_OF_Reader();
	void _Find_Expired_year_reader();

private:
	vector<Reader*> reader;
	string name;
};
