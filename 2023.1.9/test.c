#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//打印乘法口诀表
// 
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d = %-2d  ", i,j,i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//求10 个整数中最大值

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	
//	for(i=0;i<10;i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大值为:%d ", max);
//
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

//int main()
//{
//	float a = 0.0f;
//	int i = 0;
//	double ans = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		ans += pow(-1, i+1) / i;
//	}
//	printf("%lf", ans);
//	return 0;
//}
//

//1到 100 的所有整数中出现多少个数字9

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//
//	return 0;
//}

//二分查找
//在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int left = 0;
//	int mid = 0;
//	int k = 6;
//	int flag = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid+1;
//
//		}
//		else if (k < arr[mid])
//		{
//			right = mid-1;
//
//		}
//		else if (k == arr[mid])
//		{
//			printf("下标为：%d", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("找不到\n");
//	}
//	
//	return 0;
//}
//
