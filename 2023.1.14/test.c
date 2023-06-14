#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//��̬�ڴ濪�ٳ�������
// 1 . ��NULLָ��Ľ����ò���
// 2.  �Զ�̬���ٿռ�Խ�����
// 3.  ʹ��free�ͷŷǶ�̬���ٵĿռ�
// 4.  ʹ��free�ͷŶ�̬�ڴ��е�һ����
// 5.  ��ͬһ�鶯̬���ٵĿռ䣬����ͷ�
// 6.  ��̬���ٵĿռ������ͷ�  -  �ڴ�й©  -  �Ƚ�����

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//������A�е����ݺ�����B�е����ݽ��н�����������һ����

void Exchange(char* arr1, char* arr2 , int sz)
{
	char* temp1 = arr1;
	char* temp2 = arr2;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		char temp3;
		temp3 = *temp1;
		*temp1 = *temp2;
		*temp2 = temp3;
		temp1++;
		temp2++;
	}
}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "fedcba";
//	int sz = sizeof(arr1) / sizeof(arr1[0]) - 1;
//	Exchange(arr1, arr2,sz);
//
//
//	printf("%s  \n%s ", arr1, arr2);
//
//
//	return 0;
//}
//
//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

void init(int* arr)
{
	memset(arr, 0 , 5*sizeof(arr));
	*(arr + 1) = 2;
	*(arr + 3) = 5;
	*(arr + 4) = 7;
}

void print(const int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", *(arr + i));
	}
}

void reverse(int* arr, int sz)
{
	int left = 0;
	int right = sz-1;
	while (left < right)
	{
		int temp = *(arr + left);
		*(arr + left) = *(arr + right);
		*(arr + right) = temp;
		left++;
		right--;
	}
}

//int main()
//{
//	int arr[5];
//
//	init(arr);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr,sz);
//
//	reverse(arr,sz);
//	printf("\n");
//	print(arr, sz);
//
//	return 0;
//}

//ð������

void bubble_sort(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while (left < right)
		{
			if (arr[left] > arr[right])
			{
				int temp = arr[left];
				arr[left] = arr[right];
				arr[right] = temp;
			}
			left++;
		}
		right--;
		left = 0;
	}
}

int main()
{
	int arr[7] = { 1,2,7,5,3,8,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	int i = 0;
	for (i = 0; i < 7; i++)
	{
		printf("%d  ", arr[i]);
	}

	return 0;
}