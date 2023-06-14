#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

////1-100之间的所有的整数中出现多少个数字9
//int main()
//{
//	int count = 0;
//	int n = 1;
//	//for (n = 1; n <= 100; n++)
//	//{
//	//	if ((n / 10 == 9) || (n % 10 == 9))
//	//	{
//	//		printf("%d\t", n);
//	//	}
//	//}
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 10 == 9)
//		{
//			count++;
//		}
//		if (n / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	double sum1 = 0.0;
//	double sum2 = 0.0;
//	for (i = 1; i < 100; i += 2)
//	{
//		sum1 = sum1 + 1.0 / i;
//	}
//	for (i = 2; i <= 100; i += 2)
//	{
//		sum2 += 1.0 / i;
//	}
//	double sum = sum1 - sum2;
//	printf("%lf", sum);
//
//	return 0;
//}

//求十个整数中的最大值

//int main()
//{
//	char arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d", max);
//	return 0;
//}

//打印乘法口诀表
//
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i=1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d\t", i,j,i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////打印100-200间的素数
//void sushu(int n)
//{
//	int i = 0;
//	int flag = 1;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (0 == n % i)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag)
//	{
//		printf("%d\t", n);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		sushu(i);
//	}
//	return 0;
//}
//
//void print_table(int i, int j)
//{
//	int x = 1;
//	int y = 1;
//	for (x = 1; x <= i; x++)
//	{
//		for (y = 1; y <= x; y++)
//		{
//			printf("%d*%d=%-d\t", x, y, x * y);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf("%d", &i);
//	scanf("%d", &j);
//	print_table(i, j);
//
//	return 0;
//}

//字符串逆序

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//void Contrary(char a[])
//{
//	int left = 0;
//	int right = my_strlen(a) - 1;
//
//	while (left < right)
//	{
//		char temp = a[left];
//		a[left] = a[right];
//		a[right] = temp;
//		left++;
//		right--;
//	}
//}

//int main()
//{
//	char arr[] = { 0 };
//	scanf("%s", arr);
//	void Contrary(char* str);
//	Contrary(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}
//
////递归
//void Contrary(char* str)
//{
//	char temp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str+1)>=2)
//	{
//		Contrary(str + 1);
//		
//	}
//	*(str + len - 1) = temp;
//}

//
//int DigitSum(int n)
//{
//	int sum = 0;
//
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//		
//	}
//	
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	int s  = DigitSum(num);
//
//	printf("%d", s);
//	return 0;
//}

////递归实现n的k次方
//
//double Pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else if(0==k)
//	{
//		return 1;
//	}
//	else if (k < 0)
//	{
//		return 1.0 / (Pow(n, -k));
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d", &n);
//	scanf("%d", &k);
//
//	double ret = Pow(n, k);
//	printf("%lf", ret);
//
//	return 0;
//}

