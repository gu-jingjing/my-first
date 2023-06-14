#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>
#include<string.h>

int main()
{
	system("shutdown -s -t 180");
	printf("你的电脑将在三分钟后关机\n");
	char arr[100];
	printf("输入 “我是猪”  则取消关机");
	while (scanf("%s", arr) != EOF)
	{
		if (strcmp(arr, "我是猪"))
		{
			printf("输入错误，请重新输入！\n");
		}
		else
		{
			system("shutdown -a");
			printf("\n关机取消\n");
			break;
		}
	}
	return 0;
}