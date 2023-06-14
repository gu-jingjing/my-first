#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//extern int g_val ;//extern 用来声明外部符号
//extern int Add(int x, int y);
//#include<stdio.h>
//
//int main()
//{
//	printf("\n%d", g_val);
//
//	int a = 11;
//	int b = 22;
//	int sum = Add(a, b);
//	printf("\n%d", sum);
//
//	return 0;
//}
//

//#define ADD(X,Y) X+Y
//
//int main()
//{
//	printf("%d", 4 * ADD(4, 8));//这里会显示24，这里执行的是 4*4+8，而不是4*（4+8）
//
//	return 0;
//}

#define ADD(X,Y) ((X)+(Y))//用define定义宏，宏是有参数的

int main()
{
	printf("%d", 4 * ADD(4, 8));//这里是4*（4+8），答案是48

	return 0;
}