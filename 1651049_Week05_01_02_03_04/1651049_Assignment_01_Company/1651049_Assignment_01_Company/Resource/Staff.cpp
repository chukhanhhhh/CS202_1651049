#include "../Header/Staff.h"

Staff::Staff(){}

Staff::Staff(const Staff& s) {
	_ID = s._ID;
	_Name = s._Name;
	_Address = s._Address;
	_Day = s._Day;
	_Month = s._Month;
	_Year = s._Year;
}

void Staff::_Input() {
	do {
		cout << "ID : ";
		cin >> _ID;
	} while (_ID <= 0);
	cout << "Full Name: ";
	cin.ignore(1);
	getline(cin, _Name);
	cout << "Address: ";
	getline(cin, _Address);
	cout << "Date(dd/mm/yyyy): ";
	cin >> _Day >> _Month >> _Year;
}

void Staff::_Count() {
	cout << "ID: " << _ID << endl;
	cout << " Full Name: " << _Name << endl;
	cout << " Address: " << _Address << endl;
	cout << "Salary: " << _Calculate_Salary() << endl;
	cout << "Date: " << _Day << "/" << _Month << "/" << _Year << endl;
}

double Staff::_Calculate_Salary() { return 0; }

bool Staff::_Cout_TypeOF_Staff() { return _type; }

void Staff::_Find_ID_Staff(int id) {
	if (_ID == id)
	{
		Staff::_Count();
	}
}

void Staff::_Find_Name_Staff(string name) {
	int compare = _Name.compare(name);
	if (compare != 0) { cout << "Cannot find the name of staff." << endl; } Staff::_Count();
}

void Staff::_Find_Month_Staff(int month) {
	if(_Month == month) Staff::_Count();
}

Staff:: ~Staff(){}