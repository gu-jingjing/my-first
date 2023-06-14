#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//typedef void(*pfun_t)(int);  //对void(*)(int)的函数指针类型重命名为pfun_t
//
//void(*signal(int, void(*)(int)))(int);
//
//pfun_t signal(int, pfun_t);
//
//int main()
//{
//	(*(void(*)())0)();
//	//调用0地址处的函数
//	//该函数无参，返回类型为void
//	//1.void(*)()  -  函数指针类型
//	//2.(void(*)())0  -  对0进行了强制类型转换，被解释为一个函数地址
//	//3. *(void(*)())0  -  对0地址进行解引用操作
//	//4. (*(void(*)())0)()  -  调用0地址处的函数
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//
//	int (*pfArr[2])(int, int);//函数指针数组
//	int (*pfArr[2])(int, int) = { Add,Sub };
//
//
//
//
//	return 0;
//}