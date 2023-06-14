#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Score
{
public:
	//定义构造函数
	Score(int Chinese, int math, int English)
	{
		_Chinese = Chinese;
		_math = math;
		_English = English;
	}
private:
	int _Chinese;
	int _math;
	int _English;


};

class Date
{
public:
	Date(int year = 0, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	bool operator>(const Date& d)
	{
		if (_year > d._year)
		{
			return true;
		}
		else if (_year == d._year && _month > d._month)
		{
			return true;
		}
		else if (_year == d._year && _month == d._month && _day > d._day)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	Date& operator==(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
		return *this;
	}

private:
	int _year;
	int _month;
	int _day;
};

//运算符重载
//函数名 operator操作符
//返回类型 看操作符运算后返回值是什么
//参数，操作符有几个操作数，它就有几个参数
//bool operator>(const Date& d1, const Date& d2)
//{
//	if (d1._year > d2._year)
//	{
//		return true;
//	}
//	else if (d1._year == d2._year && d1._month > d2._month)
//	{
//		return true;
//	}
//	else if (d1._year == d2._year && d1._month == d2._month && d1._day > d2._day)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}

//int operator-(const Date& d1, const Date& d2);


// ::     sizeof     ?:    .     .*     这五个运算符不能重载

int main()
{
	Date d1(2023, 2, 3);
	Date d2(2023, 2, 11);
	Date d3(2023, 2, 13);

	cout << (d1 > d2) << endl;

	return 0;
}