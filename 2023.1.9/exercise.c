//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
////猜数字游戏
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
//		printf("请输入一个数字：\n");
//		scanf("%d", &num);
//		if (num < x)
//		{
//			printf("猜小了\n\n");
//		}
//		else if (num > x)
//		{
//			printf("猜大了\n");
//		}
//		else if (num == x)
//		{
//			printf("恭喜你，猜中了！\n");
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
//		printf("请输入选择：\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}