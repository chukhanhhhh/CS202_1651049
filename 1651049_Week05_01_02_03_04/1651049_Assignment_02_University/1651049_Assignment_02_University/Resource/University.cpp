#include "../Header/HomeroomTeacher.h"
#include "../Header/Teacher.h"
#include "../Header/University.h"

void University::_Input_list() {

	int n;
	int type;
	Teacher* Typeteacher;
	cout << "Input total of teacher in the university: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Teacher[" << i + 1 << "]:" << endl;
		cout << "If you are homeroom Teacher, your id is 1. If you just are teacher, your id is 2." << endl;
		cout << "So, your ID: ";
		cin >> type;

		Typeteacher == NULL;

		if (type == 1) Typeteacher = new HomeroomTeacher;
		else if (type == 2) Typeteacher = new Teacher;

		Typeteacher->_Input(type);
		teacher.push_back(Typeteacher);
	}

}

void University::_Count_list() {
	for (int i = 0; i < teacher.size(); i++) { teacher[i]->_Count(); }
}

double University::_Calculate_Total_Salary() {
	double sum = 0;
	for (int i = 0; i < teacher.size(); i++) { sum += teacher[i]->_Calculate_Salary(); }
	return sum;
}

void University::_Find_Max_Salary() {
	double salary = 0;
	int id = 0;
	for (int i = 0; i < teacher.size(); i++) {
		if (teacher[i]->_Calculate_Salary() > salary) id = i;
	}

	teacher[id]->_Count();
}

void University::_Role_Of_Teacher() {

	int te = 0;
	int HoTe = 0;
	for (int i = 0; i < teacher.size(); i++) {
		if (teacher[i]->_Role_Teacher() == false) te++;
		else HoTe++;
	}

	cout << "The total of teacher: " << te << endl;
	cout << "The toal of homeroom teacher: " << HoTe << endl;
}

double University::_Calculate_Average_Salary() {
	double sum = 0;
	int count = 0;
	for (int i = 0; i < teacher.size(); i++) {
		sum += teacher[i]->_Calculate_Salary();
		count++;
	}
	return (sum / count);
}

void University::_Find_Teacher_More_Value(int value) {
	for (int i = 0; i < teacher.size(); i++) {
		if (teacher[i]->_Calculate_Salary() >= value) {
			teacher[i]->_Count();
		}
	}
}

void University::_Find_Name_Teacher() {
	string name;
	cout << "\nInput name of teacher you wanna find: ";
	cin.ignore(1);
	getline(cin, name);
	for (int i = 0; i < teacher.size(); i++) {
		if (teacher[i]->_Find_Name_Teacher(name) == true) {
			teacher[i]->_Count();
		}
	}

}
void University::_Find_ID_Teacher() {
	int id;
	cout << "\nInput ID of teacher you wanna find: ";
	cin >> id;
	for (int i = 0; i < teacher.size(); i++) {
		if (teacher[i]->_Find_ID_Teacher(id) == true) {
			teacher[i]->_Count();
		}
	}
}

void University::_Find_Teacher_Day_Off() {
	for (int i = 0; i < teacher.size(); i++) {
		if (teacher[i]->_Find_Day_Off() > 4) {
			teacher[i]->_Count();
		}
	}
}