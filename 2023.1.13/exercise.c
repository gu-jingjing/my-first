#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//验证尼科彻斯定理，即：任何一个整数m的立方都可以写成m个连续奇数之和。
//
//例如：
//
//1 ^ 3 = 1
//
//2 ^ 3 = 3 + 5
//
//3 ^ 3 = 7 + 9 + 11
//
//4 ^ 3 = 13 + 15 + 17 + 19
//
//输入一个正整数m（m≤100），将m的立方写成m个连续奇数之和的形式输出。
//数据范围：1\le m\le 100\1≤m≤100
//进阶：时间复杂度：O(m)\O(m) ，空间复杂度：O(1)\O(1)
//
//输入描述：
//输入一个int整数
//
//输出描述：
//输出分解后的string

//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int sum = 0;
//    int beg = 1;
//    //计算m分解后所有分解的数字的个数
//    for (i = 1; i <= n; i++)
//    {
//        sum += i;
//    }
//    //计算m分解的，第一个数字
//    for (i = 0; i < sum - n; i++)
//    {
//        beg += 2;
//    }
//
//    for (i = 0; i < n - 1; i++)
//    {
//        printf("%d+", beg);
//        beg += 2;
//    }
//    printf("%d", beg);
//    return 0;
//}

//描述
//等差数列 2，5，8，11，14。。。。
//（从 2 开始的 3 为公差的等差数列）
//输出求等差数列前n项和
//
//
//数据范围： 1 \le n \le 1000 \1≤n≤1000
//输入描述：
//输入一个正整数n。
//
//输出描述：
//输出一个相加后的整数。
//
//示例1
//输入：
//2
//复制
//输出：
//7
//复制
//说明：
//2 + 5 = 7
//示例2
//输入：
//275
//复制
//输出：
//113575
//复制
//说明：
//2 + 5 + ... + 821 + 824 = 113575


//int Num(int n)
//{
//    int i = 0;
//    int num = 2;
//    for (i = 0; i < n - 1; i++)
//    {
//        num += 3;
//    }
//    return  num;
//}
//int main() {
//    int i = 0;
//
//    int sum = 0;
//    int n = 0;
//    scanf("%d", &n);
//
//    for (i = 1; i <= n; i++)
//    {
//        sum += Num(i);
//    }
//    printf("%d", sum);
//    return 0;
//}

//描述
//首先输入要输入的整数个数n，然后输入n个整数。输出为n个整数中负数的个数，和所有正整数的平均值，结果保留一位小数。
//0即不是正整数，也不是负数，不计入计算。如果没有正数，则平均值为0。
//
//数据范围： 1 \le n\ \le 2000 \1≤n ≤2000  ，输入的整数都满足 | val | \le 1000 \∣val∣≤1000
//输入描述：
//首先输入一个正整数n，
//然后输入n个整数。
//
//输出描述：
//输出负数的个数，和所有正整数的平均值。

//int main() {
//    int n = 0;
//    int count = 0;
//    int ucount = 0;
//    float sum = 0;
//    float ret = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int num = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &num);
//        if (num < 0)
//        {
//            count++;
//        }
//        if (num > 0)
//        {
//            sum += num;
//            ucount++;
//        }
//    }
//    if (ucount == 0)
//    {
//        ret = 0;
//    }
//    else {
//        ret = sum / ucount;
//    }
//    printf("%d %.1f", count, ret);
//    return 0;
//}

//斐波那契数列


int Fb(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	if (n < 3)
	{
		return c;
	}
	else if (n == 3)
	{
		return a + b;
	}
	else if(n>3)
	{
		int i = 0;
		for (i = 0; i < n-3; i++)
		{
				int temp = a + b;
				a = b;
				b = temp;
				c = a + b;
		}
	}
	return c;
}

int Fei(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	if (n < 3)
	{
		return c;
	}
	else
	{
		int temp = a + b;
		a = b;
		b = temp;
		c = a + b;
		n--;
	}
	return  Fei(n) + Fei(n - 1);
}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fei(n);
//	printf("%d", ret);
//
//	return 0;
//}



//递归实现n的k次方
int Pow(int n, int k)
{
	int i = 0;
	int ret = 1;
	for (i = 0; i < k; i++)
	{
		ret *= n;
	}
	return ret;
}

//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d", &n);
//	scanf("%d", &k);
//	int ret = Pow(n, k);
//	printf("%d", ret);
//
//	return 0;
//}

//计算一个数的每位之和（递归实现）

int Sum(int n)
{
	int s;
	int ret = 0;
	if (n > 9)
	{
		s = n / 10;
		ret = n % 10;
	}
	else
		return n;

	return Sum(s) + ret;

}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Sum(n);
//	printf("%d", ret);
//
//	return 0;
//}

//字符串逆序（递归实现）

void Back(char* arr,int left,int right)
{
	if (left < right)
	{
		char temp = 0;
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
	else
		return;
	return Back(arr , left,right);

}

//int main()
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	Back(arr,0,sz-1);
//	
//	printf("%s", arr);
//
//	return 0;
//}

//递归和非递归分别实现strlen

int Strlen(const char* arr)
{
	if (*arr != '\0')
	{
		return Strlen(arr + 1) + 1;
	}
	else
		return 0;
}

int my_strlen(const char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr += 1;
	}
	return count;
}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", Strlen(arr));
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

int Fac(int n)
{
	if (n > 0)
	{
		return Fac(n - 1) * n;
	}
	else
		return 1;
}

int Fact(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d\n", Fac(n));
//	printf("%d\n", Fact(n));
//	return 0;
//}
//
//递归方式实现打印一个整数的每一位

void Print(int n)
{
	
	if (n > 9)
	{
		int ret = n / 10;
		Print(ret);
	}
	int k = n % 10;
	printf("%d ", k);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	Print(n);

	return 0;
}