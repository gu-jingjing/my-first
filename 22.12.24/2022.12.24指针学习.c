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

	/*    ָ��Ĵ�С����ͬ��
	    ��Ϊָ����������ŵ�ַ��
		ָ����Ҫ���ռ䣬ȡ���ڵ�ַ�Ĵ洢��Ҫ���ռ�   
		32λ  32bit - 4byte
		64λ  64bit - 8byte
		                          */

	return 0;
}