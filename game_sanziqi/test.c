#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("\n**********************************\n");
	printf("********    1.play      **********\n");
	printf("********    0.exit      **********\n");
	printf("**********************************\n");

}

void game()
{

	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	PrintBoard(board, ROW, COL);

	while (1)
	{
		//玩家下棋
		PlayBoard(board, ROW, COL);
		PrintBoard(board, ROW, COL);

		//判断输赢
		int ret = WinBoard(board, ROW, COL);
		if (ret)
		{
			PrintBoard(board, ROW, COL);
			break;
		}

		//电脑下棋
		MPlayBoard(board, ROW, COL);
		PrintBoard(board, ROW, COL);

		//判断输赢
		int re = WinBoard(board, ROW, COL);
		if (re)
		{
			PrintBoard(board, ROW, COL);
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}

	} while (input);

	return 0;
}