#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//������  Ҳ�й�����



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


//ʹ���������жϴ�С��
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
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//
//	return 0;
//}

//�������С�ļ���
//������Ĵ�С����������Ա�Ĵ�С
//������Ա��С����������������������ʱ�򣬾�Ҫ���뵽����������������

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