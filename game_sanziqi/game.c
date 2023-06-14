#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//��ʼ������
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

//��ӡ����
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

//�������
void PlayBoard(char board[ROW][COL], int row, int col)
{
	int flag = 1;
	while (flag)
	{
		printf("����������(���������ÿո����):   ");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		if ((x > row) || (y > col) ||(board[x-1][y-1]!=' '))
		{
			printf("���벻�Ϸ�������������");
		}
		else if(board[x-1][y-1] == ' ')
		{
			board[x-1][y-1] = '*';
			flag = 0;
		}
	}
}

//��������
void MPlayBoard(char board[ROW][COL] , int row, int col)
{
	int flag = 1;
	printf("�������壺\n");
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

//�ж���Ӯ
int WinBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	//�ж���
	for (i = 0; i < row; i++)
	{
		if ((board[i][0] == board[i][1])&&(board[i][1] == board[i][2]))
		{
			if (board[i][0] == '*')
			{
				printf("\n��Ӯ�ˣ�\n\n");
				return 1;
			}
			else if(board[i][0] =='#')
			{
				printf("\n�����ˣ�\n\n");
				return 1;
			}
		}
	}
	//�ж���
	for (j = 0; j < col; j++)
	{
		if ((board[0][j] == board[1][j]) && (board[1][j] == board[2][j]))
		{
			if (board[0][j] == '*')
			{
				printf("\n��Ӯ�ˣ�\n\n");
				return 1;
			}
			else if(board[0][j] == '#')
			{
				printf("\n�����ˣ�\n\n");
				return 1;
			}
		}
	}
	//�ж�б��
	if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]))
	{
		if (board[0][0] == '*')
		{
			printf("\n��Ӯ�ˣ�\n\n");
			return 1;
		}
		else if (board[0][0] == '#')
		{
			printf("\n�����ˣ�\n\n");
			return 1;
		}

	}

	if ((board[0][2] == board[1][1]) && (board[1][1] == board[2][0]))
	{
		if (board[2][0] == '*')
		{
			printf("\n��Ӯ�ˣ�\n\n");
			return 1;
		}
		else if(board[2][0] == '#')
		{
			printf("\n�����ˣ�\n\n");
			return 1;
		}
	}

	//�ж�ƽ��
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
		printf("\nƽ��\n\n");
		return 1;
	}
	return 0;
}