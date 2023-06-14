#define _CRT_SECURE_NO_WARNINGS 1
#include"sort.h"



void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// ≤Â»Î≈≈–Ú
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}

// œ£∂˚≈≈–Ú
void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;

		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}

// —°‘Ò≈≈–Ú
void SelectSort(int* a, int n)
{
	int begin = 0;
	int end = n - 1;
	int maxi = 0;
	int mini = 0;
	while (begin < end)
	{
		maxi = begin;
		mini = begin;
		for (int i = begin; i <= end; i++)
		{
			if (a[i] > a[maxi])
			{
				maxi = i;
			}
			if (a[i] < a[mini])
			{
				mini = i;
			}
		}

		Swap(&a[mini], &a[begin]);

		if (maxi == begin)
		{
			maxi = mini;
		}

		Swap(&a[maxi], &a[end]);
		end--;
		begin++;
	}
}


// ∂—≈≈–Ú
void AdjustDwon(int* a, int n, int root)
{
	int child = root * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child + 1] > a[child])
		{
			child++;
		}
		if (a[child] > a[root])
		{
			Swap(&a[child], &a[root]);
			root = child;
			child = root * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapSort(int* a, int n)
{
	//Ω®¥Û∂—
	for (int i = n / 2 + 1; i >= 0; i--)
	{
		AdjustDwon(a, n, i);
	}

	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[end], &a[0]);
		end--;
		AdjustDwon(a, end + 1, 0);
	}
}

void ShowArr(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n");
}