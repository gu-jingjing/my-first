#define _CRT_SECURE_NO_WARNINGS 1

#include"sort.h"

void TestInsertSort()
{
	int arr[10] = { 2,5,1,4,9,6,8,7,3,8 };
	InsertSort(arr, 10);
	PrintArray(arr, 10);
}

void TestShellSort()
{
	int arr[] = { 1,2,5,3,8,7,9,6,4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	ShellSort(arr, n);
	PrintArray(arr, n);
}

void TestSelectSort()
{
	int arr[] = { 1,2,5,3,8,7,9,6,4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	SelectSort(arr, n);
	PrintArray(arr, n);
}

void TestQuickSort()
{
	int arr[] = { 1,2,5,3,8,7,9,6,4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	QuickSort(arr, 0, n-1);
	PrintArray(arr, n);
}

int main()
{
	//TestInsertSort();
	//TestShellSort();
	//TestSelectSort();
	TestQuickSort();

	return 0;
}