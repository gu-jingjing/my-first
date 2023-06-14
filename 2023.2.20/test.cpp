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

	//初始化列表  -  成员变量定义的地方
	Date(int year, int month, int day)
		:_year(year)
		, _month(month)
		, _day(day)
		, _N(10)
	{}

private:
	int _year;  //声明
	int _month;
	int _day;
	const int _N;
};

int main()
{
	Date d1(2022, 1, 19); //对象定义

	return 0;
}