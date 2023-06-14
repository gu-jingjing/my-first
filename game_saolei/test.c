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
	//��ʼ��
	InitBoard(mineboard, ROWS, COLS, '0');
	InitBoard(showboard, ROWS, COLS, '*');
	//��ӡ
	DisplayBoard(showboard, ROW, COL);
	//������
	MakeBoard(mineboard, ROW, COL);
	//DisplayBoard(mineboard, ROW, COL);
	//�Ų���
	int ret = FindBoard(mineboard, showboard, ROW, COL);
	if (ret == 0)
		printf("\n��ϲ�㣡ɨ�׳ɹ���\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("������ѡ��  ");
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
			printf("�����������������\n");
			break;
		}

	} while (input);

	return 0;
}