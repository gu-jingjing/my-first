#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>//使用Sleep函数需要引用的头文件
#include<string.h>

////计算1！+2！+......n!   优化
//int main()
//{
//	int n = 1;
//	int ret = 1;
//	long long sum = 0;
//	for (n = 1; n <= 5; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

////查找指定值在有序数组中的下标
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 6;//要查找的值
//	int sz = (sizeof(arr)) / (sizeof(arr[0]));
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到：%d\n", mid);
//			break;
//		}
//	}
//	
//	if (left > right)
//	{
//		printf("找不到");
//	}
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "welcome to hello world!";
//	char arr2[] = "***********************";
//
//	int left = 0;
//	int right = strlen(arr1)-1;
//	
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠一秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char arr[30] = { 0 };
//	char password[] = "123456";
//	printf("请输入密码：");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", arr);
//		if (strcmp(password,arr)==0)//两个字符串比较，不能使用 ==  ，应该使用strcmp
//		{
//			printf("输入正确,欢迎使用");
//			break;
//		}
//		else
//		{
//			printf("输入错误，请重试");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序");
//	}
//
//
//	return 0;
//
//}