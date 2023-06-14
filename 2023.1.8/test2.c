#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	float f = 9.0f;
//	int* p = (int*)&f;
//	printf("%d\n", *p);
//	
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;
//	//parr就是一个数组指针  -  其中存放的是数组的地址
//
//	double* d[5];
//	double* (*pd)[5] = &d;
//	//pd就是一个数组指针
//
//
//	return 0;
//}

//数组名是数组首元素的地址
//但是有两个例外
//1.  sizeof(数组名)  -  数组名表示整个数组 ， 计算的是整个数组大小， 单位是字节
//2. &数组名 - 数组名表示整个数组， 取出的是整个数组的地址

//int main()
//{
//	int arr[10] = { 0 };
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//	printf("%p\n", p2 );
//	printf("%p\n", p2+1);
//
//	return 0;
//}

//int main()
//{
//	//int arr[5] = { 1,2,3,4,5 };
//	//int i = 0;
//	//int(*p)[5] = &arr;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%d ", *((*p) + i));
//	//}
//	////一维数组  可以用，但不建议(数组指针）
//
//
//	//int arr[5] = { 1,2,3,4,5 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//
//
//	return 0;
//}

//void Print(int (*p)[4],int r,int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
////二维数组的首元素是第一行！！！
//
//int main()
//{
//	int arr[3][4] = { {1,2,5,3},{4,4,5,6},{7,6,8,9} };
//
//	Print(arr, 3, 4);
//
//
//	return 0;
//}


//二级指针

//void test(int** p2)
//{
//	**p2 = 20;
//	printf("%d", * *p2);
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//
//	test(ppa);
//
//	return 0;
//}


//数组名 ！= &数组名
//函数名 == &函数名   (函数的地址)

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//
//	int (*pf) (int, int) = &Add;
//	int (*pf) (int, int) = Add;//Add == pf
//	//这两句话等价
//
//	int ret = Add(2, 3);
//	int ret = (*pf)(2, 3);
//	int ret = pf(2, 3);
//	//这三句话等价
//
//	printf("%d", ret);
//	return 0;
//}


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

	for (i = 0; i < n; i++)
	{
		int temp = 0;
		temp = arr[i];
		int j = 0;
		for (j = i; j < n; j++)
		{
			if (temp < arr[j])
			{

				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;

			}
		}

	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}