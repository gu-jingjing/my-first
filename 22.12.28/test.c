#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"szq.h"

void menu()
{
	printf("************************************\n");
	printf("******        1.play        ********\n");
	printf("******        0.exit        ********\n");
	printf("************************************\n");
}

void game()
{
	char board[ROW][COL];
	InitBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);

	char ret = 0;

	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		printf("\n");

		//�ж�����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		printf("\n");

		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
		if ('*' == ret)
		{
			printf("��Ӯ�ˣ�\n\n");
		}
		else if ('#' == ret)
		{
			printf("������\n\n");
			
		}
		else
		{
			printf("ƽ��\n\n");
		}
		DisplayBoard(board, ROW, COL);
	
}

int main()
{
	srand((unsigned int)time(NULL));

	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�������������ѡ��:");
			break;
		}
	} while (input);

	return 0;
}