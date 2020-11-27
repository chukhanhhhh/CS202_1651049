#include "../Header/VipReader.h"

void VipReader::_Input() {
	Reader::_Input();
}

void VipReader::_Count() {
	Reader::_Count();
}

double VipReader::_Calculate_Fee() {
	return((Reader::_Charge_fees())+50000);
}