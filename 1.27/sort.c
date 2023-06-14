#define _CRT_SECURE_NO_WARNINGS 1

#include"sort.h"

void _MergeSort(int* a, int left, int right, int* tmp)
{
	if (left >= right)
	{
		return;
	}
	int mid = (left + right) / 2;
	_MergeSort(a, left, mid, tmp);
	_MergeSort(a, mid + 1, right, tmp);

	int i = left;
	int begin1 = left;
	int end1 = mid;
	int begin2 = mid + 1;
	int end2 = right;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[i++] = a[begin1++];
		}
		else
		{
			tmp[i++] = a[begin2++];
		}
	}
	while (begin1 <= end1)
	{
		tmp[i++] = a[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[i++] = a[begin2++];
	}
	for (int j = left; j <= right; j++)
	{
		a[j] = tmp[j];
	}
}

//¹é²¢ÅÅÐò
void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		printf("malloc failed!\n");
		exit(-1);
	}

	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
	tmp = NULL;
}

//¹é²¢ÅÅÐòµÄ·ÇµÝ¹é
void MergeSort2(int* a, int n)
{
	int* tmp = (int*)malloc(  n  *  sizeof(int));
	if (tmp == NULL)
	{
		printf("malloc failed!\n");
		exit(-1);
	}



	int gap = 1;
	while (gap < n)
	{

		for (int i = 0; i < n; i += 2 * gap)
		{
			int begin1 = i;
			int end1 = i + gap - 1;
			int begin2 = i + gap;
			int end2 = i + 2 * gap - 1;

			if (end1 >= n || begin2>=n)
			{
				break;
			}

			if (end2 >= n)
			{
				end2 = n - 1;
			}

			int j = i;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[j++] = a[begin1++];
				}
				else
				{
					tmp[j++] = a[begin2++];
				}
			}
			while (begin1 <= end1)
			{
				tmp[j++] = a[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[j++] = a[begin2++];
			}

			for (int k = i; k <= end2; k++)
			{
				a[k] = tmp[k];
			}
		}


		gap *= 2;
	}

	free(tmp);
	tmp = NULL;
}