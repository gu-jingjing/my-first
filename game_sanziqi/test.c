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
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	PrintBoard(board, ROW, COL);

	while (1)
	{
		//�������
		PlayBoard(board, ROW, COL);
		PrintBoard(board, ROW, COL);

		//�ж���Ӯ
		int ret = WinBoard(board, ROW, COL);
		if (ret)
		{
			PrintBoard(board, ROW, COL);
			break;
		}

		//��������
		MPlayBoard(board, ROW, COL);
		PrintBoard(board, ROW, COL);

		//�ж���Ӯ
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
		printf("������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}

	} while (input);

	return 0;
}