#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//typedef void(*pfun_t)(int);  //��void(*)(int)�ĺ���ָ������������Ϊpfun_t
//
//void(*signal(int, void(*)(int)))(int);
//
//pfun_t signal(int, pfun_t);
//
//int main()
//{
//	(*(void(*)())0)();
//	//����0��ַ���ĺ���
//	//�ú����޲Σ���������Ϊvoid
//	//1.void(*)()  -  ����ָ������
//	//2.(void(*)())0  -  ��0������ǿ������ת����������Ϊһ��������ַ
//	//3. *(void(*)())0  -  ��0��ַ���н����ò���
//	//4. (*(void(*)())0)()  -  ����0��ַ���ĺ���
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//
//	int (*pfArr[2])(int, int);//����ָ������
//	int (*pfArr[2])(int, int) = { Add,Sub };
//
//
//
//
//	return 0;
//}