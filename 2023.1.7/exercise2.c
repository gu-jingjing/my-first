#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a[] = { 1,2,3,4,5,6 };
	int b[] = { 2,3,4,5,6,7 };
	int c[] = { 3,4,5,6,7,8 };

	int* p[] = { a,b,c };

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 6; j++)
		{
			printf("%d ", *(p[i] + j));
			printf("%d ", p[i][j]);//ģ���ά���飬���Ƕ�ά������������������ŵġ��������a,b,c�������໥������
			//�����������Ч�����
		}
		printf("\n");
	}

	return 0;
}