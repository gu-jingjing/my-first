#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//ʵ��һ�����������������ַ����е�k���ַ���
//	���磺
//	ABCD����һ���ַ��õ�BCDA
//	ABCD���������ַ��õ�CDAB

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

//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);

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
		printf("�����ִ���\n");
	}
	else
	{
		printf("�����ֲ�����\n");
	}

	return 0;
}


//int main()
//{
//	int a = 7;
//	float* pFloat = (float*)&a;
//
//	printf("a��ֵΪ��%d\n", a);
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);
//
//	*pFloat = 7.0;
//	printf("a��ֵΪ��%d\n", a);
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);
//
//	return 0;
//}