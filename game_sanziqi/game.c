#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘
void PrintBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (j < col - 1)
			{
				printf(" %c |",board[i][j]);
			}
			else
			{
				printf(" %c ",board[i][j]);
			}
		}

		printf("\n");

		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
	printf("\n");
}

//玩家下棋
void PlayBoard(char board[ROW][COL], int row, int col)
{
	int flag = 1;
	while (flag)
	{
		printf("请输入坐标(两个数字用空格隔开):   ");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		if ((x > row) || (y > col) ||(board[x-1][y-1]!=' '))
		{
			printf("输入不合法，请重新输入");
		}
		else if(board[x-1][y-1] == ' ')
		{
			board[x-1][y-1] = '*';
			flag = 0;
		}
	}
}

//电脑下棋
void MPlayBoard(char board[ROW][COL] , int row, int col)
{
	int flag = 1;
	printf("电脑下棋：\n");
	while (flag)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		if (board[x][y] != ' ')
		{
			continue;
		}
		else
		{
			board[x][y] = '#';
			flag = 0;
		}
	}
}

//判断输赢
int WinBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	//判断行
	for (i = 0; i < row; i++)
	{
		if ((board[i][0] == board[i][1])&&(board[i][1] == board[i][2]))
		{
			if (board[i][0] == '*')
			{
				printf("\n你赢了！\n\n");
				return 1;
			}
			else if(board[i][0] =='#')
			{
				printf("\n你输了！\n\n");
				return 1;
			}
		}
	}
	//判断列
	for (j = 0; j < col; j++)
	{
		if ((board[0][j] == board[1][j]) && (board[1][j] == board[2][j]))
		{
			if (board[0][j] == '*')
			{
				printf("\n你赢了！\n\n");
				return 1;
			}
			else if(board[0][j] == '#')
			{
				printf("\n你输了！\n\n");
				return 1;
			}
		}
	}
	//判断斜行
	if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]))
	{
		if (board[0][0] == '*')
		{
			printf("\n你赢了！\n\n");
			return 1;
		}
		else if (board[0][0] == '#')
		{
			printf("\n你输了！\n\n");
			return 1;
		}

	}

	if ((board[0][2] == board[1][1]) && (board[1][1] == board[2][0]))
	{
		if (board[2][0] == '*')
		{
			printf("\n你赢了！\n\n");
			return 1;
		}
		else if(board[2][0] == '#')
		{
			printf("\n你输了！\n\n");
			return 1;
		}
	}

	//判断平局
	int flag = 1;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				flag = 0;
				break;
			}
		}
	}
	if (flag)
	{
		printf("\n平局\n\n");
		return 1;
	}
	return 0;
}