#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>
#include<string.h>

int main()
{
	system("shutdown -s -t 180");
	printf("��ĵ��Խ��������Ӻ�ػ�\n");
	char arr[100];
	printf("���� ��������  ��ȡ���ػ�");
	while (scanf("%s", arr) != EOF)
	{
		if (strcmp(arr, "������"))
		{
			printf("����������������룡\n");
		}
		else
		{
			system("shutdown -a");
			printf("\n�ػ�ȡ��\n");
			break;
		}
	}
	return 0;
}