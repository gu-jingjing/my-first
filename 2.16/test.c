#define _CRT_SECURE_NO_WARNINGS 1

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；  (b == 2 && a != 3) || (b != 2 && a == 3)
//B选手说：我第二，E第四；  (b == 2 && e != 4) || (b != 2 && e == 4)
//C选手说：我第一，D第二；  (c == 1 && d != 2) || (c != 1 && d == 2)
//D选手说：C最后，我第三；  (c == 5 && d != 3) || (c != 5 && d == 3)
//E选手说：我第四，A第一；  (e == 4 && a != 1) || (e != 4 && a == 1)
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//#include<stdio.h>
//
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//
//	b = 2, c = 1, d = 3, e = 4, a = 5;
//	if (a != 3 && e != 4 && d != 2 && d == 3 && a != 1)
//	{
//		printf("a = %d , b = %d , c = %d , d = %d , e = %d\n", a, b, c, d, e);
//		return 0;
//	}
//
//	a = 3, e = 4, c = 5, d = 2, b = 1;
//	if (b != 2 && a != 1 && d != 3 && c != 1)
//	{
//		printf("a = %d , b = %d , c = %d , d = %d , e = %d\n", a, b, c, d, e);
//		return 0;
//	}
//
//	return 0;
//}

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//
//A说：不是我。 a == 0
//B说：是C。    c == 1    (c==0)
//C说：是D      d == 1    (d==0)
//D说：C在胡说  d == 0
//
//已知3个人说了真话，1个人说的是假话。
//
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//#include<stdio.h>
//
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	//C或B说假话
//
//	//B说假话
//	d = 1;
//	if (a == 0 && c == 0 && d == 0)
//	{
//		printf("D是凶手");
//		return 0;
//	}
//
//	a = 0, b = 0, c = 0, d = 0;
//
//	//C说假话
//	c = 1;
//	if (a == 0 && c == 1 && d == 0)
//	{
//		printf("C是凶手");
//		return 0;
//	}
//
//	return 0;
//}

//杨辉三角
#include<stdio.h>

int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	int* arr = malloc(sizeof(int) * n);
	int* front = malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			arr[0] = 1;
			arr[i] = 1;
			if (i >= 2 && j >= 1 && j <= (i / 2))
			{
				arr[j] = front[j - 1] + front[j];
				arr[i - j] = arr[j];
			}
		}
		for (int j = 0; j <= i; j++)
		{
			printf("%-4d ", arr[j]);
			front[j] = arr[j];
		}
		printf("\n");
	}
	free(arr);
	arr = NULL;
	free(front);
	front = NULL;

	return 0;
}