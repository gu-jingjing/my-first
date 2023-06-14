#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
//初始化
void InitBoard(char board[ROWS][COLS], int row, int col ,char c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = c;
		}
	}
}

//打印
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 1;
	int j = 1;
	printf("**************  扫雷  *******************\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ",i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		for (j = 0; j <= col; j++)
		{
			if (0 == j)
			{
				printf("%d ", i);
			}
			else
			{
				printf("%c ", board[i][j]);
			}
		}
		printf("\n");
		
	}
}

//布置雷
void MakeBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = MAX_COUNT;
	while(1)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
		if (0 == count)
		{
			break;
		}

	}
}

//若无雷，展开空白
void BlankBoard(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y)
{
	if ('0' == show[x][y])
	{
		show[x][y] = ' ';
		int i = x;
		int j = y;
		while (mine[i][j] == '0')
		{
			j = y;
			if (show[i][j] == '*')
				show[i][j] = ' ';
			while ((show[i][j + 1] == '*') && (mine[i][j + 1] == '0'))
				show[i][j + 1] = ' ';
			j = y;
			while ((show[i][j - 1] == '*') && (mine[i][j - 1] == '0'))
				show[i][j - 1] = ' ';
			if (mine[i][j] != '0')
				break;
			i--;
		}
		i = x;
		j = y;
		while (mine[i][j] == '0')
		{
			i = x;
			if (show[i][j] == '*')
				show[i][j] = ' ';
			while ((show[i + 1][j] == '*')&&(mine[i+1][j] == '0'))
				show[i + 1][j] = ' ';
			i = x;
			while (show[i - 1][j] == '*' && mine[i - 1][j] == '0')
				show[i - 1][j] = ' ';
			if (mine[i][j] != '0')
				break;
			j--;
		}
		i = x;
		j = y;
		while (mine[i][j] == '0')
		{
			if (show[i][j] == '*')
			show[i][j] = ' ';
			while (show[i][j - 1] == '*' && mine[i][j - 1] == '0')
				show[i][j - 1] = ' ';
			j = y;
			while ((show[i][j + 1] == '*') && (mine[i][j + 1] == '0'))
				show[i][j + 1] = ' ';
			if (mine[i][j] != '0')
				break;
			i++;
		}
		i = x;
		j = y;
		while (mine[i][j] == '0')
		{
			if(show[i][j] == '*')
			show[i][j] = ' ';
			while (show[i - 1][j] == '*' && mine[i - 1][j] == '0')
				show[i - 1][j] = ' ';
			i = x;
			while ((show[i + 1][j] == '*') && (mine[i + 1][j] == '0'))
				show[i + 1][j] = ' ';
			if (mine[i][j] != '0')
				break;
			j++;
		}

	}
}

void Menu()
{
	printf("\n   1 . 排查坐标    \n");
	printf("\n   2 . 标记雷      \n");
	printf("\n   3 . 取消标记雷      \n");

}

//排查雷
int FindBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int count = MAX_COUNT;
	while (1)
	{
		Menu();
		printf("请输入选择： ");
		int input = 0;
		scanf("%d", &input);
		switch (input)
		{
			case 1:
			{
				printf("请输入需要排查的坐标：  ");
				int x = 0;
				int y = 0;
				scanf("%d %d", &x, &y);
				int count = 0;
				if (x >= 1 && x <= row && y >= 1 && y <= col)
				{
					if (show[x][y] == '*')
					{
						if (mine[x][y] == '1')
						{
							printf("\n很遗憾，踩到雷，游戏结束！\n");
							printf("\n雷的位置如下：\n");
							DisplayBoard(mine, ROW, COL);
							return 1;
						}
						else if (mine[x][y] == '0')
						{
							count = mine[x - 1][y - 1] + mine[x - 1][y]
								+ mine[x - 1][y + 1] + mine[x][y - 1]
								+ mine[x][y + 1] + mine[x + 1][y - 1]
								+ mine[x + 1][y] + mine[x + 1][y + 1]
								- 8 * '0';
							show[x][y] = count + '0';

							BlankBoard(mine, show, x, y);

							DisplayBoard(show, ROW, COL);

						}
					}
					else
					{
						printf("已排查，请重新输入\n");
					}
				}
				else
				{
					printf("输入错误，请重新输入！\n");
				}
			}
			break;
			case 2:
			{
				printf("请输入需要标记的坐标： ");
				int x = 0;
				int y = 0;
				scanf("%d %d", &x, &y);
				if (show[x][y] == '*')
				{
					show[x][y] = '#';
					DisplayBoard(show, ROW, COL);
					if (mine[x][y] == '1')
					{
						count--;
					}
				}
				else
				{
					printf("输入错误！\n");
				}
			}
			break;
			case 3:
			{
				printf("请输入需要取消标记的坐标： ");
				int x = 0;
				int y = 0;
				scanf("%d %d", &x, &y);
				if (show[x][y] == '#')
				{
					show[x][y] = '*';
					DisplayBoard(show, ROW, COL);
				}
				else
				{
					printf("输入错误！\n");
				}
			}
			break;
			default:
				printf("输入错误，请重新输入\n");
				break;
		}
		if (count == 0)
			break;
	}
	return count;
}