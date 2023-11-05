//Nhập vào số năm
//In ra kết luận năm đó là năm nhuận hay năm thường.Năm nhuận là :
//năm chia hết cho 400, hoặc
//năm chia hêt cho 4 và ko chia hết cho 100

#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "Nhap nam: "; cin >> year;

	if (year % 400 == 0)
	{
		cout << "Nam " << year << " la nam nhuan";
	}
	else if (year % 4 == 0 && year % 100 != 0)
	{
		cout << "Nam " << year << " la nam nhuan";
	}
	else
	{
		cout <<"Nam " << year << " khong phai la nam nhuan (nam thuong)";
	}
}