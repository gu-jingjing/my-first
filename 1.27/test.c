#define _CRT_SECURE_NO_WARNINGS 1

#include"sort.h"

void TestMergeSort()
{
	int a[] = { 5,8,3,1,4,9,11,24,6,9 };
	int i = 0;
	int n = sizeof(a) / sizeof(a[0]);
	MergeSort2(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
	TestMergeSort();

	return 0;
}