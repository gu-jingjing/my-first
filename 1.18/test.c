#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct s1
//{
//	char a;
//	int b;
//	char c;
//	int d;
//}s1;
//
//struct s2
//{
//	char a;
//	struct s1 s;
//	int x;
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(s1));
//	struct s2 s2;
//	printf("%d\n", sizeof(s2));
//
//	return 0;
//}

#pragma pack(8)//����Ĭ�϶�����Ϊ8
struct S1
{
    char a;
    int b;
    char c;
};
#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
#pragma pack(1)//����Ĭ�϶�����Ϊ1
struct S2
{
    char c;
    int a;
    char b;
};
#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
int main()
{
    printf("%d\n", sizeof(struct S1));
    printf("%d\n", sizeof(struct S2));
    return 0;
}