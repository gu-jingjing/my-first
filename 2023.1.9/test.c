#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//��ӡ�˷��ھ���
// 
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d = %-2d  ", i,j,i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��10 �����������ֵ

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	
//	for(i=0;i<10;i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("���ֵΪ:%d ", max);
//
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

//int main()
//{
//	float a = 0.0f;
//	int i = 0;
//	double ans = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		ans += pow(-1, i+1) / i;
//	}
//	printf("%lf", ans);
//	return 0;
//}
//

//1�� 100 �����������г��ֶ��ٸ�����9

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//
//	return 0;
//}

//���ֲ���
//��һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int left = 0;
//	int mid = 0;
//	int k = 6;
//	int flag = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid+1;
//
//		}
//		else if (k < arr[mid])
//		{
//			right = mid-1;
//
//		}
//		else if (k == arr[mid])
//		{
//			printf("�±�Ϊ��%d", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("�Ҳ���\n");
//	}
//	
//	return 0;
//}
//
