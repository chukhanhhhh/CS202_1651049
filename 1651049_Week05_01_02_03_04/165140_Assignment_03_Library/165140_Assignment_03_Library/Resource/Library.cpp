#include "../Header/BaseReader.h"
#include "../Header/Library.h"
#include "../Header/Reader.h"
#include "../Header/VipReader.h"

void Library::_InputList() {
	int n;
	int type;
	Reader* TypeReader;
	cout << "Enter the number of members: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "reader[" << i + 1 << "]." << endl;
		cout << "If you are Vip Reader, your number is 1. If you just are base reader, your number is 0. " << endl;
		cout << "So, enter your number: ";
		cin >> type;

		TypeReader = NULL;

		if (type == 0) {
			TypeReader = new BaseReader;
		}
		else if (type == 1) {
			TypeReader = new VipReader;
		}
		TypeReader->_Input(type);
		reader.push_back(TypeReader);
	}
}

void Library::_CountList() {
	for (int i = 0; i < reader.size(); i++) {
		cout << "Doc Gia Thu " << i + 1 << endl;
		reader[i]->_Input();
	}
}

double Library::_Total_Fees() {
	double sum = 0;
	for (int i = 0; i < reader.size(); i++) {
		sum += reader[i]->_Charge_fees();

	}
	return sum;
}

void Library::_Find_Max_Fees() {
	double highest = 0;
	int num = 0;
	for (int i = 0; i < reader.size(); i++) {
		if (highest < reader[i]->_Charge_fees()) {
			highest = reader[i]->_Charge_fees();
			num = i;
		}

	}
	reader[num]->_Count();
}

void Library::_Check_Type_Reader() {
	int baseReader = 0;
	int vipReader = 0;
	for (int i = 0; i < reader.size(); i++) {
		if (reader[i]->_typeReader() == false)
		{
			baseReader++;
		}
		else if (reader[i]->_typeReader() == true) { vipReader++; }

	}

	cout << "There are " << baseReader << "base readers" << endl;
	cout << "There are " << vipReader << "vip readers" << endl;
}

double Library::_Average_Fees() {
	double sum = 0;
	int count = 0;
	for (int i = 0; i < reader.size(); i++) {
		sum += reader[i]->_Charge_fees();
		count++;

	}

	return (sum / count);
}

void Library::_Find_Fees_More_Value(int value) {
	for (int i = 0; i < reader.size(); i++) {
		if (reader[i]->_Charge_fees() > value) { reader[i]->_Count(); }

	}
}

void Library::_Find_ID_OF_Reader() {
	int id;
	cout << "Input ID of reader you wanna find: ";
	cin >> id;
	for (int i = 0; i < reader.size(); i++) {
		if (reader[i]->_Find_ID_Reader(id) == true) { reader[i]->_Count(); }

	}
	
}

void Library::_Find_Name_OF_Reader() {
	string name;
	cout << "Input name of reader you wanna find: ";
	cin.ignore(1);
	getline(cin, name);
	for (int i = 0; i < reader.size(); i++) {
		if (reader[i]->_Find_Name_Reader(name) == true) { reader[i]->_Count(); }

	}

}

void Library::_Find_Expired_year_reader() {
	for (int i = 0; i < reader.size(); i++) {
		if (reader[i]->_Expired_year_reader() < 2017) { reader[i]->_Count(); }

	}
}