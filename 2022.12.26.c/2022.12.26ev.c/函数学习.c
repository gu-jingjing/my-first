#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//������Ƕ�׵��ú���ʽ����

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}

//�������ɱ�Ƕ�׶��壬���ɱ�Ƕ�׵���

//��ʽ���ʣ���һ�������ķ���ֵ��Ϊһ�������Ĳ���

//printf���ص��Ǵ�ӡ����Ļ�ϵ��ַ��ĸ���

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//���������ӡ����  4321
//	return 0;
//}


#include"add.h"
int main()
{
	int a = 10;
	int b = 20;

	//�����ú�����λ���ڶ��庯��֮ǰ������Ҫ������һ��
	//��������һ��
	int Add(int, int);//ֻ����������

	int c = Add(a, b);
	printf("%d", c);
	return 0;

}
//
//int Add(int x, int y)
//{
//	return x + y;
//}


