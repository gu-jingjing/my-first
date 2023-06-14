#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//动态内存开辟常见错误
// 1 . 对NULL指针的解引用操作
// 2.  对动态开辟空间越界访问
// 3.  使用free释放非动态开辟的空间
// 4.  使用free释放动态内存中的一部分
// 5.  对同一块动态开辟的空间，多次释放
// 6.  动态开辟的空间忘记释放  -  内存泄漏  -  比较严重

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

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

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
//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

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

//冒泡排序

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