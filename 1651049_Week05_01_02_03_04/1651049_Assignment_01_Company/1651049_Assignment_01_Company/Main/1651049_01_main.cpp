#include "../Header/Staff.h"
#include "../Header/JapaneseStaff.h"
#include "../Header/ProductionStaff.h"
#include "../Header/Company.h"

int main() {
	Company Payoo;
	Payoo._Input_Staff();
	Payoo._Calculate_Total_Salary();
	Payoo._Find_Max_Salary();
	Payoo._Find_Average_Salary();
	Payoo._Cout_TypeOF_Staff();
	Payoo._Find_Staff_Salary_Less_value(3000000);

	return 0;
}