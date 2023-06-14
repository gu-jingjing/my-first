#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//实现一个函数，可以左旋字符串中的k个字符。
//	例如：
//	ABCD左旋一个字符得到BCDA
//	ABCD左旋两个字符得到CDAB

char* Whirl(char* arr, int k, int len)
{
	char* ret = arr;

	int i = 0;
	for (i = 0; i < k; i++)
	{
		arr = ret;
		char tmp = *arr;
		int j = 0;
		for (j = 0; j < len - 1; j++) 
		{
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + len - 1) = tmp;
	}

	return ret;
}

//int main()
//{
//	char arr[] = "abcd";
//	int k = 1;
//	int len = strlen(arr);
//	Whirl(arr, k, len);
//	printf("%s", arr);
//	return 0;
//}

//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);

int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };
	int arr3[] = { 3,5,7,9,11 };
	int arr4[] = { 4,6,8,10,12 };
	int arr5[] = { 5,7,9,11,13 };
	int* arr[] = { arr1,arr2,arr3,arr4,arr5 };

	int k = 8;
	int left = 0;
	int right = 4;

	int top = 0;
	int bottom = 4;
	int flag = 0;
	int i = 0;
	while (arr[i][i] < k && i < right && i < bottom)
	{
		i++;
	}
	bottom = i;
	right = i;
	while (left < right)
	{
		int tmp = (left + right + 1) / 2;
		if (arr[bottom][tmp] < k)
		{
			left = tmp;
		}
		if (arr[bottom][tmp] == k)
		{
			flag = 1;
			break;
		}
		if (arr[bottom][tmp] > k)
		{
			right = tmp;
		}
	}
	
	if (flag != 1)
	{
		while (top < bottom)
		{
			int tmp = (top + bottom + 1) / 2;
			if (arr[right][tmp] < k)
			{
				top = tmp;
			}
			if (arr[right][tmp] == k)
			{
				flag = 1;
				break;
			}
			if (arr[right][tmp] > k)
			{
				bottom = tmp;
			}
		}
	}

	if (flag)
	{
		printf("该数字存在\n");
	}
	else
	{
		printf("该数字不存在\n");
	}

	return 0;
}


//int main()
//{
//	int a = 7;
//	float* pFloat = (float*)&a;
//
//	printf("a的值为：%d\n", a);
//	printf("*pFloat的值为:%f\n", *pFloat);
//
//	*pFloat = 7.0;
//	printf("a的值为：%d\n", a);
//	printf("*pFloat的值为:%f\n", *pFloat);
//
//	return 0;
//}