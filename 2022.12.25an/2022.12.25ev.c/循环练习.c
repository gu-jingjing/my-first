#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
����һ������
���մӴ�С��˳�������
*/

int main()
{
	int arr[] = { 0 };
	int n = 0;
	scanf("%d", &n);

	//����n������
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//����n�������Ӵ�С����
	int j = 0;
	int k = 0;
	int m = 0;
	for (k = 0; k < n; k++)
	{
		for (i =k; i < n; i++)
		{
			if (m < arr[i])
			{
				m = arr[i];
				j = i;
			}
		}
		arr[j] = arr[k];
		arr[k] = m;
		m = 0;
	}

	//���
	for (i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
	return 0;

}