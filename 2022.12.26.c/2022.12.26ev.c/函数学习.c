#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//函数的嵌套调用和链式访问

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}

//函数不可被嵌套定义，但可被嵌套调用

//链式访问：把一个函数的返回值作为一个函数的参数

//printf返回的是打印在屏幕上的字符的个数

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//所以这里打印的是  4321
//	return 0;
//}


#include"add.h"
int main()
{
	int a = 10;
	int b = 20;

	//若调用函数的位置在定义函数之前，则需要先声明一下
	//函数声明一下
	int Add(int, int);//只用声明类型

	int c = Add(a, b);
	printf("%d", c);
	return 0;

}
//
//int Add(int x, int y)
//{
//	return x + y;
//}


