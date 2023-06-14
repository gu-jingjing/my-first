#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
输入一个数组
按照从大到小的顺序将其输出
*/

int main()
{
	int arr[] = { 0 };
	int n = 0;
	scanf("%d", &n);

	//输入n个整数
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//将这n个数按从大到小排序
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

	//输出
	for (i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
	return 0;

}