#include"../Header/BaseReader.h"
#include"../Header/Library.h"
#include"../Header/Reader.h"
#include"../Header/VipReader.h"

int main() {
	Library Admont;

	Admont._InputList();
	Admont._CountList();
	Admont._Check_Type_Reader();
	cout << Admont._Total_Fees() << endl;
	cout << Admont._Average_Fees() << endl;
	Admont._Find_Max_Fees();
	Admont._Find_Fees_More_Value(30000);
	Admont._Find_ID_OF_Reader();
	Admont._Find_Name_OF_Reader();
	Admont._Find_Expired_year_reader();

	return 0;

}