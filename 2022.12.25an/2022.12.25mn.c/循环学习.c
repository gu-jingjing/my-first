#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//在while循环中，break用于永久的终止循环,  continue用于跳过本次循环continue后面的代码，直接去判断部分，看是否进行下一次循环

//EOF   -   end of file   -   文件结束标志  EOF本质是-1
//int main()
//{
//	int ch = getchar();
//	printf("%c\n ", ch);
//	putchar(ch);//输出一个字符
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//ctrl+z   -   getchar 就读取结束
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	//清理缓冲区
//	getchar();//处理\n
//	printf("请确认密码(Y/N)：");
//
//	int ch = getchar();
//
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
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
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	//清理缓冲区的多个字符
//	int temp = 0;
//	while ((temp = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("请确认密码(Y/N)：");
//
//	int ch = getchar();
//
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//
//	return 0;
//}

//计算n的阶乘
//int main()
//{
//	printf("请输入n：");
//	int n = 1;
//	long long num = 1;
//	scanf("%d", &n);
//
//	//int n = 10;
//	//long long num = 1;
//
//	int i = 1;
//	for (i = 1; i <=n; i++)
//	{
//		num = num * i;
//	}
//
//	printf("\n%d的阶乘为：%d",n, num);
//
//	return 0;
//}


//计算1！+2！+3！+......+10！
int nnn(n)
{
	int i = 1;
	long long num = 1;
	for (i = 1; i <= n; i++)
	{
		num = num * i;
	}
	return num;
}
//static long long sum;
int main()
{
	printf("1！+2！+3！+......+10！结果为：");
	long long sum = 0;
	int j = 1;
	for (j = 1; j <= 10; j++)
	{
		nnn(j);
		sum = sum+ nnn(j);
	}
	printf("%lld", sum);
	return 0;
}


