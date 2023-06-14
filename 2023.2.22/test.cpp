#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Date
{
public:
	Date(int year)
		:_year(year)
	{
		cout << "Date(int year)" << endl;

	}

	Date(const Date& dd)
	{
		cout << "Date(const Date& dd)" << endl;
	}


	/*explicit Date(int year)
		:_year(year)
	{}*/

private:
	int _year;
};

int main()
{
	Date d1(2022);

	Date d2 = 2022;  //隐式类型转换
	//本来用2022构造一个临时对象Date(2022)，再用这个对象拷贝构造d2
	//但是C++编译器在连续的一个过程中，多个构造会被优化，合二为一。
	//所以这里被优化为  直接就是一个构造

	//隐式类型转换 - 相近类型 -- 表示意义相近的类型

	return 0;
}