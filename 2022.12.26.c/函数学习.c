#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////输出闰年
//int is_leap_year(int n)
//{
//	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//	//也可以写成return (( n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d\t", year);
//		}
//	}
//
//	
//	return 0;
//}



//二分查找
//注意：数组arr传参，实际传递的不是数组本身，只是传过去了数组首元素的地址！

//int binary_search(int* a, int k, int s)
int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);

	//找到了就返回找到的位置的下标
	//找不到就返回-1

	int ret = binary_search(arr,key,sz);
	if (-1 == ret)
	{
		printf("Error!");
	}
	else
	{
		printf("下标是：%d\n", ret);
	}

	return 0;
}