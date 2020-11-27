#include "../Header/HomeroomTeacher.h"
#include "../Header/Teacher.h"
#include "../Header/University.h"

int main() {
	University HCMUS;

	HCMUS._Input_list();
	HCMUS._Count_list();
	HCMUS._Role_Of_Teacher();
	HCMUS._Calculate_Total_Salary();
	HCMUS._Find_Max_Salary();
	HCMUS._Find_Teacher_More_Value(10000000);
	HCMUS._Find_Teacher_Day_Off();
	HCMUS._Calculate_Average_Salary();

	return 0;
}