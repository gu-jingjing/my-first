#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	float f = 9.0f;
//	int* p = (int*)&f;
//	printf("%d\n", *p);
//	
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;
//	//parr����һ������ָ��  -  ���д�ŵ�������ĵ�ַ
//
//	double* d[5];
//	double* (*pd)[5] = &d;
//	//pd����һ������ָ��
//
//
//	return 0;
//}

//��������������Ԫ�صĵ�ַ
//��������������
//1.  sizeof(������)  -  ��������ʾ�������� �� ����������������С�� ��λ���ֽ�
//2. &������ - ��������ʾ�������飬 ȡ��������������ĵ�ַ

//int main()
//{
//	int arr[10] = { 0 };
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//	printf("%p\n", p2 );
//	printf("%p\n", p2+1);
//
//	return 0;
//}

//int main()
//{
//	//int arr[5] = { 1,2,3,4,5 };
//	//int i = 0;
//	//int(*p)[5] = &arr;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%d ", *((*p) + i));
//	//}
//	////һά����  �����ã���������(����ָ�룩
//
//
//	//int arr[5] = { 1,2,3,4,5 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//
//
//	return 0;
//}

//void Print(int (*p)[4],int r,int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
////��ά�������Ԫ���ǵ�һ�У�����
//
//int main()
//{
//	int arr[3][4] = { {1,2,5,3},{4,4,5,6},{7,6,8,9} };
//
//	Print(arr, 3, 4);
//
//
//	return 0;
//}


//����ָ��

//void test(int** p2)
//{
//	**p2 = 20;
//	printf("%d", * *p2);
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//
//	test(ppa);
//
//	return 0;
//}


//������ ��= &������
//������ == &������   (�����ĵ�ַ)

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//
//	int (*pf) (int, int) = &Add;
//	int (*pf) (int, int) = Add;//Add == pf
//	//�����仰�ȼ�
//
//	int ret = Add(2, 3);
//	int ret = (*pf)(2, 3);
//	int ret = pf(2, 3);
//	//�����仰�ȼ�
//
//	printf("%d", ret);
//	return 0;
//}


int main()
{
	int arr[] = { 0 };
	int n = 0;
	scanf("%d", &n);

	//����n������
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//����n�������Ӵ�С����

	for (i = 0; i < n; i++)
	{
		int temp = 0;
		temp = arr[i];
		int j = 0;
		for (j = i; j < n; j++)
		{
			if (temp < arr[j])
			{

				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;

			}
		}

	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}