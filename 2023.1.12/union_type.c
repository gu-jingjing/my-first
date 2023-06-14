#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//联合体  也叫共用体



union Un
{
	char c;
	int i;
};


//
//int main()
//{
//	union Un u = { 10 };
//
//
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//
//	return 0;
//}
//


//使用联合体判断大小端
int check_sys()
{
	union U
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;

}

//int main()
//{
//	if (check_sys())
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//
//	return 0;
//}

//联合体大小的计算
//联合体的大小至少是最大成员的大小
//当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍

union Unn
{
	char a[19];
	int i;
};

//int main()
//{
//	printf("%d ", sizeof(union Unn));
//
//	return 0;
//}