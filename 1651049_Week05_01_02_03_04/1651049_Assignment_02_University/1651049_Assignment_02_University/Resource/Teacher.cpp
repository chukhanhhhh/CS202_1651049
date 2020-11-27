#include "../Header/Teacher.h"

Teacher::Teacher(){}

void Teacher::_Input(bool type) {
	cout << "Input ID of Teacher: ";
	cin >> ID;

	cout << "Inpute name of teacher: ";
	cin.ignore(1);
	getline(cin, NameTeacher);

	cout << "Input coefficient of teacher: ";
	cin >> Coefficient;

	cout << "Input base salary of teacher: ";
	cin >> baseSalary;

	cout << "Input the number day off of teacher: ";
	cin >> DayOff;

	StyleTeacher = type;
}

void Teacher::_Count() {
	cout << "ID of Teacher: " << ID << endl;
	cout << "Name : " << NameTeacher << endl;
	if (StyleTeacher == true) cout << "Role: Homeroom Teacher." << endl;
	else cout << "ROle: Teacher" << endl;
	cout << "Coefficient: " << Coefficient << endl;
	cout << "Base salary: " << baseSalary << endl;
	cout << "Day off: " << DayOff << endl;
}

double Teacher::_Calculate_Salary() {
	return ((Coefficient * baseSalary) - (DayOff * 100000));
}

bool Teacher::_Role_Teacher() {
	return StyleTeacher;
}

bool Teacher::_Find_ID_Teacher(int id) {
	if(ID == id) return true;
	return false;
}

bool Teacher::_Find_Name_Teacher(string name) {
	if (NameTeacher.compare(name) != 0) {
		cout << "Something wrong!";
		return false;
	}

	return true;
}

int Teacher::_Find_Day_Off() {
	return DayOff;
}



Teacher::~Teacher() {}