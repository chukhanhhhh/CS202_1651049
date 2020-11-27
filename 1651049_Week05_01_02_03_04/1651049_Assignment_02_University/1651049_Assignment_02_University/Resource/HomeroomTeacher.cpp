#include "../Header/HomeroomTeacher.h";

HomeroomTeacher::HomeroomTeacher() {}

void HomeroomTeacher::_Input() {	Teacher::_Input(true); }

void HomeroomTeacher::_Count() { Teacher::_Count(); }

double HomeroomTeacher::_Calculate_Salary() { return (Teacher::_Calculate_Salary() + 500000); }

HomeroomTeacher::~HomeroomTeacher(){}