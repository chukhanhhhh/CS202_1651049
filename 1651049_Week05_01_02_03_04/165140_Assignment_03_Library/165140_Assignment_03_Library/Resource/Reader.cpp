#include "../Header/Reader.h"

Reader::Reader(){}

void Reader::_Input(bool type) {
	cout << "Input ID of Reader: ";
	cin >> ID;

	cout << "INput name of Reader: ";
	cin.ignore(1);
	getline(cin, ReaderName);

	cout << "Enter the Card Expiry date(dd-mm-yyyy): ";
	cin >> day >> month >> year;

	cout << "\nInput your sex (male or female): ";
	cin.ignore(1);
	getline(cin, sex);
	typeReader = type;
}

void Reader::_Count() {
	cout << "ID of Reader: " << ID << endl;
	cout << " name of Reader: " << ReaderName << endl;
	cout << "The Card Expiry date: " << day << "-" << month << "-" << year << endl;
	cout << "sex: " << sex << endl;
}

double Reader::_Charge_fees() { return 0; }

bool Reader::_typeReader() { return typeReader; }

bool Reader::_Find_ID_Reader(int id) {
	if (ID != id) return false;
	return true;
}

bool Reader::_Find_Name_Reader(string name) {
	if (ReaderName.compare(name) != 0) return false;
	return true;
}

int Reader::_Expired_year_reader() {
	return year;
}

Reader::~Reader() {}