#define _CRT_SECURE_NO_WARNINGS 1
/*
��������Ϸ
�������һ��1-100֮�������
��Ϸ����һֱ�棬�����˳���Ϸ
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("\n");
	printf("**************************\n");
	printf("*****    1. play     *****\n");
	printf("*****    0. exit     *****\n");
}

void game()
{
	//���������
	int ret = rand() % 100;
	int guess = 0;

	while (1)
	{
		printf("\n������֣�");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��");
		}
		else if (guess > ret)
		{
			printf("�´���");
		}
		else
		{
			printf("��ϲ�㣬�����ˣ�\n");
			break;
		}

	}
}

int main()
{
	//rand�������������һ��0-32767֮�������
	//ʱ��  -  ʱ���

	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��"); 
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����");
			break;
		}

	} while (input);


	return 0;
}