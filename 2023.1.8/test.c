#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char a = 0;
//	char ch = 0;
//	printf("请输入密码： ");
//	scanf("%s[^\n] ", &a);
//
//	printf("请确认密码 ：Y/N\n");
//
//	while (getchar() != '\n')
//	{
//		;
//	}
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\t", i);
//		}
//	}
//	return 0;
//}


//输入数字，按照从大到小顺序输出
//
//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	
////
//	for (i = 0; i < 3; i++)
//	{
//		int temp = 0;
//		temp = arr[i];
//		int j = 0;
//		for (j = i; j < 3; j++)
//		{
//			if (temp < arr[j])
//			{
//				 
//				temp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = temp;
//
//			}
//		}
//		
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//打印100-200之间的素数

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			else if(i-1 == j)
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//	return 0;
//}

//稍作改进
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			else if((sqrt(i)-1)<j)
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//	return 0;
//}


//打印1000年-2000年之间的闰年
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0))
//		{
//			printf("%d ", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

//求两个数的最大公约数
//
////辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int tmp = 0;
//
//	scanf("%d %d", &a, &b);
//	if (a <= b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a > b)
//	{
//		while (a % b != 0)
//		{
//			int temp = a % b;
//			a = b;
//			b = temp;
//		}
//		printf("%d", b);
//	}
//
//	return 0;
//}

//直接求解法

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 0;
//	i = a > b ? b : a;
//	for (; i >= 2; i--)
//	{
//		if((a % i == 0) && (b % i == 0))
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}