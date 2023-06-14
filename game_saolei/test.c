#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("\n****************************************\n");
	printf("******         1.play           ********\n");
	printf("******         0.exit           ********\n");
	printf("****************************************\n");
}

void game()
{
	char mineboard[ROWS][COLS] = { 0 };
	char showboard[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mineboard, ROWS, COLS, '0');
	InitBoard(showboard, ROWS, COLS, '*');
	//打印
	DisplayBoard(showboard, ROW, COL);
	//布置雷
	MakeBoard(mineboard, ROW, COL);
	//DisplayBoard(mineboard, ROW, COL);
	//排查雷
	int ret = FindBoard(mineboard, showboard, ROW, COL);
	if (ret == 0)
		printf("\n恭喜你！扫雷成功！\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入选择：  ");
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
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);

	return 0;
}