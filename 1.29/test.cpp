#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//缺省参数
//全缺省：所有参数都给了缺省值
void Print(int a = 0)
{
	cout << a << endl;
}

//半缺省  -  缺省一部分
//1.  半缺省参数必须从右往左依次给出，不能间隔
//2.  缺省参数不能在函数声明和定义中同时出现
void Print2(int a, int b = 22, int c = 33)
{
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}

//int main()
//{
//	const char* arr = "hello world";
//	cout << arr << endl;
//
//	//  cin  -  流提取运算符
//
//	Print(10);
//	Print();  //没有传参时，使用参数的默认值
//
//
//	return 0;
//}

//函数重载
//函数重载是函数的一种特殊情况，C++允许在同一作用域中声明几个功能类似的同名函数，
//这些同名函数的 形参列表（参数个数 或 类型 或 顺序 ）不同，常用来处理实现功能类似 数据类型不同的问题

//缺省值不同，不能构成重载

//下面两个函数构成重载，但是使用时有问题
void Me()
{
	cout << 1 << endl;
}

void Me(int a = 0)
{
	cout << 2 << endl;
}

//重载

int Sub(int x, int y)
{
	return x - y;
}

double Sub(double x, double y)
{
	return x - y;
}

int main()
{

	cout << Sub(8, 6) << endl;


	cout << Sub(8.8,6.6) << endl;

	return 0;
}