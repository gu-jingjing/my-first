//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
////��������Ϸ
//
//void menu()
//{
//	printf("*******************************************\n");
//	printf("*********        1.play        ************\n");
//	printf("*********        0.exit        ************\n");
//	printf("*******************************************\n");
//}
//
//game()
//{
//	int x = 0;
//	int num = 0;;
//	x = rand() % 100 + 1;
//
//	while (1)
//	{
//		printf("������һ�����֣�\n");
//		scanf("%d", &num);
//		if (num < x)
//		{
//			printf("��С��\n\n");
//		}
//		else if (num > x)
//		{
//			printf("�´���\n");
//		}
//		else if (num == x)
//		{
//			printf("��ϲ�㣬�����ˣ�\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("������ѡ��\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}