#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
extern int ADD;
int main()
{
	static int AB = 100;

	AB = 1000;//      static ��������ȫ�ֱ������������ξֲ��������������κ����� static���εı������Ըı䡣

	printf("%d\n", AB);
	printf("%d", ADD);
	return 0;
}