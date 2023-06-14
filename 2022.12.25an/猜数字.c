#define _CRT_SECURE_NO_WARNINGS 1
/*
猜数字游戏
随机生成一个1-100之间的数字
游戏可以一直玩，除非退出游戏
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("\n");
	printf("**************************\n");
	printf("*****    1. play     *****\n");
	printf("*****    0. exit     *****\n");
}

void game()
{
	//生成随机数
	int ret = rand() % 100;
	int guess = 0;

	while (1)
	{
		printf("\n请猜数字：");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了");
		}
		else if (guess > ret)
		{
			printf("猜大了");
		}
		else
		{
			printf("恭喜你，猜中了！\n");
			break;
		}

	}
}

int main()
{
	//rand函数随机返回了一个0-32767之间的数字
	//时间  -  时间戳

	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请选择："); 
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束");
			break;
		}

	} while (input);


	return 0;
}