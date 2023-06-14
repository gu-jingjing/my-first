#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int b = 30;
//	int c = Sub(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}

//函数递归(自己调用自己）

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//
//	print(num);
//
//	return 0;
//}

////要注意避免栈溢出
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//
//int main()
//{
//	test(1);
//
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "yeah";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}
//
//
////递归与迭代
//int Fac(int n)
//{
//	if ((n <= 1) && (n >= 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//
//	printf("%d\n", ret);
//	return 0;
//}

////斐波那契数列
//int count = 0;
//
//int Fib(int n)
//{
//	//统计第三个斐波那契数的计算次数
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//
//	//printf("count=%d\n", count);
//
//	return 0;
//}