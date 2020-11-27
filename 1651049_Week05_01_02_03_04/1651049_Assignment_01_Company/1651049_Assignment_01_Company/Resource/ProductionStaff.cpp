#include "../Header/ProductionStaff.h"

ProductionStaff::ProductionStaff() : Staff(){}

ProductionStaff::ProductionStaff(const ProductionStaff& pr) : Staff(pr) {}

void ProductionStaff::_Input() {

	Staff::_Input();

	cout << "The number of productions: ";
	cin >> productions;
}

void ProductionStaff::_Count() {

	Staff::_Count();

	cout << "The Number of productions are: " << productions << endl;
}

double ProductionStaff::_Calculate_Salary() {

	return (Staff::_Calculate_Salary() + productions * 10000);
}

ProductionStaff::~ProductionStaff(){}