#define _CRT_SECURE_NO_WARNINGS 1


////写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//#include<stdio.h>
//
//struct S
//{
//	char a;
//	char b;
//	int c;
//	int* d;
//};
//
//#define OFFSETOF(type, name) (size_t)(&(((type*)0)->name))
//
//int main()
//{
//	printf("%d\n%d\n%d\n%d\n", 
//		OFFSETOF(struct S, a),
//		OFFSETOF(struct S, b),
//		OFFSETOF(struct S, c),
//		OFFSETOF(struct S, d));
//
//	return 0;
//}
//
//
//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。
#include<stdio.h>

#define EXCHANGEBIT(num) (((num&(0x55555555))<<1)+((num&(0xaaaaaaaa))>>1))

int main()
{
	int a = 5;

	int b = EXCHANGEBIT(a);
	printf("%d\n%d\n", a, b);

	return 0;
}