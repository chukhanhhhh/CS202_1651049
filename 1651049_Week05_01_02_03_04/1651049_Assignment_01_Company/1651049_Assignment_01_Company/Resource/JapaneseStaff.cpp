#include "../Header/JapaneseStaff.h"

JapaneseStaff::JapaneseStaff() : Staff() {}

JapaneseStaff::JapaneseStaff(const  JapaneseStaff& J) : Staff(J) {}

void JapaneseStaff::_Input() {
	Staff::_Input();
	cout << "Coefficients salary: ";
	cin >> _number;
	cout << "Base salary: ";
	cin >> _Base_Salary;
}

void JapaneseStaff::_Count() {
	Staff::_Count();
	cout << "Coefficients salary: " << _number << endl;
	cout << "Base salary: " << _Base_Salary << endl;
}

double JapaneseStaff::_Calculate_Salary() {
	return (Staff::_Calculate_Salary() + ( _number * _Base_Salary));
}

JapaneseStaff::~JapaneseStaff(){}

