#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Reader
{
public:
	Reader();
	~Reader();
	virtual void _Input();
	virtual void _Count();
	virtual double _Charge_fees();
	virtual bool _typeReader();
	virtual bool _Find_ID_Reader(int);
	virtual bool _Find_Name_Reader(string);
	virtual int _Expired_year_reader();

private:
	int ID;
	string ReaderName;
	int day, month, year;
	string sex;
	int NumberBook;
	bool typeReader;
};