#include "../Header/Company.h"
#include "../Header/Staff.h"
#include "../Header/ProductionStaff.h"
#include "../Header/JapaneseStaff.h"

void Company::_Input_Staff() {
	int total;
	int type;
	Staff* s;
	cout << "Enter the total number of employees in the company: ";
	cin >> total;
	for(int i=0; i < total; i++){
		cout << "Input information of employees [" << i << "] :" << endl;
		cout << "If you are production staff, your number is 1. If you are Japanese staff, your number is 2. Input type of employees: ";
		cin >> type;

		s = NULL;

		try
		{
			if (type == 1) {
				s = new ProductionStaff;
			}
			else if(type == 2)
			{
				s = new JapaneseStaff;
			}

		}
		catch (const char* msg)
		{
			cout << "Something Wrong !" << endl;
		}
	}
}

double Company::_Calculate_Total_Salary() {
	float sum = 0;
	for (int i = 0; _staff.size(); i++) {
		sum += _staff[i]->_Calculate_Salary();
	}
	return sum;
}

double Company::_Find_Max_Salary() {
	double MaxSalary = 0;
	int ID;
	for (int i = 0; i < _staff.size(); i++) {
		if (MaxSalary < _staff[i]->_Calculate_Salary()) {
			ID = i;
			MaxSalary = _staff[i]->_Calculate_Salary();
		}
	}
	_staff[ID]->_Count();
	cout << "Highest Salary: " << MaxSalary << endl;

}

void Company::_Cout_TypeOF_Staff() {
	int number_ProductionStaff = 0, number_JapaneseStaff = 0;
	for (int i = 0; i < _staff.size(); i++) {
		(_staff[i]->_Cout_TypeOF_Staff() == true) ? number_ProductionStaff++ : number_JapaneseStaff++;
	}
	cout << "There are " << number_ProductionStaff << " Production staffs in the company." << endl;
	cout << "There are " << number_JapaneseStaff << " Japanese staffs in the company." << endl;
}

double Company::_Find_Average_Salary() {
	double average = 0;
	int count = 0;
	for (int i = 0; i < _staff.size(); i++) {
		average += _staff[i]->_Calculate_Salary();
		count++;
	}
	return (average / count);
}

void Company::_Find_Staff_Salary_Less_value(int value = 3000000) {
	for (int i = 0; i < _staff.size(); i++) {
		if (_staff[i]->_Calculate_Salary() < value)  _staff[i]->_Count();
	}
}

void Company::_Find_ID_Staff() {
	int ID;
	cout << "Enter ID of Staff: ";
	cin >> ID;
	for (int i = 0; i < _staff.size(); i++) {
		_staff[i]->_Find_ID_Staff(ID);
	}
}

void Company::_Find_Name_Staff() {
	string name;
	cout << "Input name of Staff: ";
	cin.ignore(1);
	getline(cin, name);
	for (int i = 0; i < _staff.size(); i++) {
		_staff[i]->_Find_Name_Staff(name);
	}
}

void Company::_Find_Month_Staff() {
	for (int i = 0; i < _staff.size(); i++) {
		_staff[i]->_Find_Month_Staff(5);
	}
}

