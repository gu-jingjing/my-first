#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>

//�޸�Ĭ�϶�����   �ĳ�2
//#pragma pack(2)
struct S
{
	char c1;
	int i;
	char c2;
};
//#pragma pack()
//��Ĭ�϶������Ļ���

//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//
//
//	return 0;
//}

//  λ�Σ� λ�ε������ͽṹ�����Ƶģ���������ͬ
//λ�εĳ�Ա������ int  �� unsigned int  �� �� signed int  
//2. λ�εĳ�Ա�������һ��ð�ź�һ������

//����:

struct A
{
	int _a : 2;  //_a��Առ2��bitλ
	int _b : 5; //_b��Առ5��bitλ
	int _c : 10;  //_c��Առ10��bitλ
	int _d : 30;  //_d��Առ30��bitλ
};

//λ�εĳ�Ա������  int   ��   unsigned int  �� signed int  ������   char(�������ͼ���)  ����
//λ�εĿռ����ǰ�����Ҫ��4���ֽ�(int)  ����1���ֽ�(char)  �ķ�ʽ���ٵ�
//λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨�ģ�ע�ؿ���ֲ�ĳ���Ӧ�ñ���ʹ��λ��

//int main()
//{
//	printf("%d", sizeof(struct A));
//
//	return 0;
//}


//ö��

enum Day
{
	Mon,
	Tues,
	Wed,
	Thurs,
	Fri,
	Sat,
	Sun
};

//ö�ٵ��ŵ㣺
//  1.���Ӵ���Ŀɶ��ԺͿ�ά����
//  2.��#define����ı�ʶ���Ƚϣ�ö�������ͼ�飬�����Ͻ�
//  3����ֹ��������Ⱦ����װ��
//  4.���ڵ���
//  5.ʹ�÷��㣬һ�ο��Զ���������

enum Color
{
	RED = 5, //���Ը���������ֵ  ��������ֵ��Ĭ�ϴ�0��ʼ
	GREEN,
	BLUE
};

//int main()
//{
//	enum Color c = BLUE;
//
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//
//	return 0;
//}