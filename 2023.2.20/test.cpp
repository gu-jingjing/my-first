#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Date
{
public:
	//Date(int year, int month, int day)
	//{
	//	_year = year;
	//	_month = month;
	//	_day = day;
	//}

	//��ʼ���б�  -  ��Ա��������ĵط�
	Date(int year, int month, int day)
		:_year(year)
		, _month(month)
		, _day(day)
		, _N(10)
	{}

private:
	int _year;  //����
	int _month;
	int _day;
	const int _N;
};

int main()
{
	Date d1(2022, 1, 19); //������

	return 0;
}