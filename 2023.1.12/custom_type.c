#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>

//修改默认对齐数   改成2
//#pragma pack(2)
struct S
{
	char c1;
	int i;
	char c2;
};
//#pragma pack()
//把默认对齐数改回来

//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//
//
//	return 0;
//}

//  位段： 位段的声明和结构是类似的，有两个不同
//位段的成员必须是 int  、 unsigned int  、 或 signed int  
//2. 位段的成员名后边有一个冒号和一个数字

//比如:

struct A
{
	int _a : 2;  //_a成员占2个bit位
	int _b : 5; //_b成员占5个bit位
	int _c : 10;  //_c成员占10个bit位
	int _d : 30;  //_d成员占30个bit位
};

//位段的成员可以是  int   、   unsigned int  、 signed int  或者是   char(属于整型家族)  类型
//位段的空间上是按照需要以4个字节(int)  或者1个字节(char)  的方式开辟的
//位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段

//int main()
//{
//	printf("%d", sizeof(struct A));
//
//	return 0;
//}


//枚举

enum Day
{
	Mon,
	Tues,
	Wed,
	Thurs,
	Fri,
	Sat,
	Sun
};

//枚举的优点：
//  1.增加代码的可读性和可维护性
//  2.和#define定义的标识符比较，枚举有类型检查，更加严谨
//  3，防止了命名污染（封装）
//  4.便于调试
//  5.使用方便，一次可以定义多个变量

enum Color
{
	RED = 5, //可以给常量赋初值  ，若不赋值则默认从0开始
	GREEN,
	BLUE
};

//int main()
//{
//	enum Color c = BLUE;
//
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//
//	return 0;
//}