#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//������������ڣ���������һ��ĵڼ��졣
//��֤���Ϊ4λ�������ںϷ���
//���ף�ʱ�临�Ӷȣ�O(n)\O(n) ���ռ临�Ӷȣ�O(1)\O(1)

//int main() {
//    int year = 0, month = 0, day = 0;
//    int ret = 0;
//    scanf("%d %d %d", &year, &month, &day);
//
//
//    int arr1[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//    int arr2[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//
//    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//    {
//        int i = 0;
//        for (i = 0; i < month - 1; i++)
//        {
//            ret += arr1[i];
//        }
//        ret += day;
//    }
//
//    else
//    {
//        int i = 0;
//        for (i = 0; i < month - 1; i++)
//        {
//            ret += arr2[i];
//        }
//        ret += day;
//    }
//    printf("%d\n", ret);
//
//    return 0;
//}


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

void Print(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d = %-2d  ", i, j, i * j);

		}
		printf("\n");
	}
}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}

//������������

//void Exchange(int* p, int* q)
//{
//	int temp = 0;
//	temp = *p;
//	*p = *q;
//	*q = temp;
//}
//
//int main()
//{
//	int a = 11;
//	int b = 22;
//	Exchange(&a, &b);
//	printf("%d %d", a, b);
//
//	return 0;
//}

//�ж�����

int leap_year(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//int main()
//{
//	int year = 2000;
//
//	int ret = leap_year(year);
//	if (ret)
//	{
//		printf("������");
//	}
//	else
//	{
//		printf("��������");
//	}
//	return 0;
//}


//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
#include<math.h>

int prime_num(int n)
{
	int i = 0;
	int flag = 1;
	if (n == 2)
		return 1;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			flag = 0;
		}
	}
	return flag;
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (prime_num(i))
		{
			printf("%d  ", i);
		}
	}

	return 0;
}