#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//extern int g_val ;//extern ���������ⲿ����
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
//	printf("%d", 4 * ADD(4, 8));//�������ʾ24������ִ�е��� 4*4+8��������4*��4+8��
//
//	return 0;
//}

#define ADD(X,Y) ((X)+(Y))//��define����꣬�����в�����

int main()
{
	printf("%d", 4 * ADD(4, 8));//������4*��4+8��������48

	return 0;
}