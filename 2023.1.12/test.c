#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//根据输入的日期，计算是这一年的第几天。
//保证年份为4位数且日期合法。
//进阶：时间复杂度：O(n)\O(n) ，空间复杂度：O(1)\O(1)

//int main() {
//    int year = 0, month = 0, day = 0;
//    int ret = 0;
//    scanf("%d %d %d", &year, &month, &day);
//
//
//    int arr1[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//    int arr2[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//
//    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//    {
//        int i = 0;
//        for (i = 0; i < month - 1; i++)
//        {
//            ret += arr1[i];
//        }
//        ret += day;
//    }
//
//    else
//    {
//        int i = 0;
//        for (i = 0; i < month - 1; i++)
//        {
//            ret += arr2[i];
//        }
//        ret += day;
//    }
//    printf("%d\n", ret);
//
//    return 0;
//}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

void Print(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d = %-2d  ", i, j, i * j);

		}
		printf("\n");
	}
}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}

//交换两个整数

//void Exchange(int* p, int* q)
//{
//	int temp = 0;
//	temp = *p;
//	*p = *q;
//	*q = temp;
//}
//
//int main()
//{
//	int a = 11;
//	int b = 22;
//	Exchange(&a, &b);
//	printf("%d %d", a, b);
//
//	return 0;
//}

//判断闰年

int leap_year(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//int main()
//{
//	int year = 2000;
//
//	int ret = leap_year(year);
//	if (ret)
//	{
//		printf("是闰年");
//	}
//	else
//	{
//		printf("不是闰年");
//	}
//	return 0;
//}


//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
#include<math.h>

int prime_num(int n)
{
	int i = 0;
	int flag = 1;
	if (n == 2)
		return 1;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			flag = 0;
		}
	}
	return flag;
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (prime_num(i))
		{
			printf("%d  ", i);
		}
	}

	return 0;
}