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

#pragma pack(8)//设置默认对齐数为8
struct S1
{
    char a;
    int b;
    char c;
};
#pragma pack()//取消设置的默认对齐数，还原为默认
#pragma pack(1)//设置默认对齐数为1
struct S2
{
    char c;
    int a;
    char b;
};
#pragma pack()//取消设置的默认对齐数，还原为默认
int main()
{
    printf("%d\n", sizeof(struct S1));
    printf("%d\n", sizeof(struct S2));
    return 0;
}