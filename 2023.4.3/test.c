#define _CRT_SECURE_NO_WARNINGS 1


////дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//#include<stdio.h>
//
//struct S
//{
//	char a;
//	char b;
//	int c;
//	int* d;
//};
//
//#define OFFSETOF(type, name) (size_t)(&(((type*)0)->name))
//
//int main()
//{
//	printf("%d\n%d\n%d\n%d\n", 
//		OFFSETOF(struct S, a),
//		OFFSETOF(struct S, b),
//		OFFSETOF(struct S, c),
//		OFFSETOF(struct S, d));
//
//	return 0;
//}
//
//
//дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ������
#include<stdio.h>

#define EXCHANGEBIT(num) (((num&(0x55555555))<<1)+((num&(0xaaaaaaaa))>>1))

int main()
{
	int a = 5;

	int b = EXCHANGEBIT(a);
	printf("%d\n%d\n", a, b);

	return 0;
}