#define _CRT_SECURE_NO_WARNINGS 1
#include"sort.h"

#define N 10000

void Test1()
{
	int arr1[10] = { 11,9,5,8,3,2,4,6,10,7 };
	InsertSort(arr1, 10);
	ShowArr(arr1, 10);

	int arr2[10] = { 11,9,5,8,3,2,4,6,10,7 };
	ShellSort(arr2, 10);
	ShowArr(arr2, 10);

	int arr3[10] = { 11,9,5,8,3,2,4,6,10,7 };
	SelectSort(arr3, 10);
	ShowArr(arr3, 10);

	int arr4[10] = { 11,9,5,8,3,2,4,6,10,7 };
	HeapSort(arr4, 10);
	ShowArr(arr4, 10);
}

void Test2()
{
	int arr[N] = { 0 };
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand()%10;
	}
	for (int i = 0; i < 10; i++)
	{
		arr[i] += 1000;
	}
	HeapSort(arr, N);
	ShowArr(arr, N);
}

int main()
{
	srand((size_t)time(NULL));

	Test2();

	return 0;
}