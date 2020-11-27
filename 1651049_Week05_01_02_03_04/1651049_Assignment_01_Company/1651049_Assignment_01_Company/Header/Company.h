#pragma once
#include "Staff.h"
class Company
{
public:
	Company();
	~Company();
	/// <summary>
	/// 1. Nhập, xuất danh sách các nhân viên.
	/// </summary>
	virtual void _Input_Staff();
	/// <summary>
	/// 2. Tính tổng tiền lương của tất cả nhân viên.
	/// </summary>
	virtual double _Calculate_Total_Salary();
	/// <summary>
	/// 3. Tìm nhân viên có lương cao nhất
	/// </summary>
	virtual double _Find_Max_Salary();
	/// <summary>
	/// 6. Tính lương trung bình trong công ty
	/// </summary>
	/// <returns></returns>
	virtual double _Find_Average_Salary();
	/// <summary>
	/// 4. Có bao nhiêu NVSX trong công ty
	/// 5. Có bao nhiêu NVCN trong công ty
	/// </summary>
	virtual void _Cout_TypeOF_Staff();
	/// <summary>
	/// 7. Liệt kê các nhân viên có lương thấp hơn 3.000.000
	/// </summary>
	/// <param name="value"></param>
	virtual void _Find_Staff_Salary_Less_value(int value);
	/// <summary>
	/// Nhập vào mã, tìm nhân viên tương ứng
	/// </summary>
	virtual void _Find_ID_Staff();
	/// <summary>
	/// Nhập vào tên, tìm nhân viên tương ứng
	/// </summary>
	virtual void _Find_Name_Staff();
	/// <summary>
	/// 10. Có bao nhiêu nhân viên sinh trong tháng 5
	/// </summary>
	virtual void _Find_Month_Staff();

private:

	string _name_company;
	vector<Staff*> _staff;
};

