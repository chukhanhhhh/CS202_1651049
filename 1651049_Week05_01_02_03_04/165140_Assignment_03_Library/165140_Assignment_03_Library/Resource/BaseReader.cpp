#include "../Header/BaseReader.h"

void BaseReader::_Input() {
	Reader::_Input();
	cout << "Enter the number of books borrowed for the month: ";
	cin >> NumberOfBookBorrowed;
}

void BaseReader::_Count() {
	Reader::_Count();
	cout << "the number of books borrowed for the month: " << NumberOfBookBorrowed << endl;
}

double BaseReader::_Calculate_Fee() {
	return( (Reader::_Charge_fees())+(NumberOfBookBorrowed * 20000));
}