#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////�������
//int is_leap_year(int n)
//{
//	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//	//Ҳ����д��return (( n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d\t", year);
//		}
//	}
//
//	
//	return 0;
//}



//���ֲ���
//ע�⣺����arr���Σ�ʵ�ʴ��ݵĲ������鱾��ֻ�Ǵ���ȥ��������Ԫ�صĵ�ַ��

//int binary_search(int* a, int k, int s)
int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);

	//�ҵ��˾ͷ����ҵ���λ�õ��±�
	//�Ҳ����ͷ���-1

	int ret = binary_search(arr,key,sz);
	if (-1 == ret)
	{
		printf("Error!");
	}
	else
	{
		printf("�±��ǣ�%d\n", ret);
	}

	return 0;
}