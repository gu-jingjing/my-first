#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));

	/*    指针的大小是相同的
	    因为指针是用来存放地址的
		指针需要多大空间，取决于地址的存储需要多大空间   
		32位  32bit - 4byte
		64位  64bit - 8byte
		                          */

	return 0;
}