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
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		printf("\n");

		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		printf("\n");

		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
		if ('*' == ret)
		{
			printf("你赢了！\n\n");
		}
		else if ('#' == ret)
		{
			printf("你输了\n\n");
			
		}
		else
		{
			printf("平局\n\n");
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
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新选择:");
			break;
		}
	} while (input);

	return 0;
}