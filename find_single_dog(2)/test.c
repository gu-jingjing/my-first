#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int find_single_dog(int* arr, int sz)
{
	int i = 0;
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret = ret^arr[i];
	}
	return ret;
}

void FindTwoNum(int arr[], int n, int* pnum1, int* pnum2)
{
	int i = 0;
	int sum = 0;

	//先找到两个数互相异或的结果
	for (i = 0; i < n; i++)
	{
		sum ^= arr[i];
	} 

	int pos = 0;

	//再找到有分歧的一位。在这一位上，两个数一定是一个1 一个0
	for (i = 0; i < 32; i++)
	{
		if ((sum >> i) & 1)
		{
			pos = i;
			break;
		}
	} 

	for (i = 0; i < n; i++)
	{
		if ((arr[i] >> pos) & 1)
		{
			*pnum1 ^= arr[i]; //这一位是1的，放在数1里
		}
		else
		{
			*pnum2 ^= arr[i]; //这一位是0的，放在数2里
		}
	}
}

int main()
{
	int arr[] = { 1,1,4,4,5,7,77,7,5,8,88,8};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int num1 = 0;
	int num2 = 0;
	FindTwoNum(arr, sz, &num1, &num2);

	printf("%d  %d\n", num1, num2);

	return 0;
}