#define _CRT_SECURE_NO_WARNINGS 1

#include"sort.h"

//打印
void PrintArray(int* a, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

//插入排序
void InsertSort(int* a, int n)
{
	assert(a);
	int end = 0;
	int x = 0;
	for (end = 0; end <= n - 2; end++)
	{
		x = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > x)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = x;
	}
}



//希尔排序
void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap /= 2;
		int j = 0;
		for (j = 0; j < gap; j++)
		{
			int end = 0;
			for (end = j; end < n - gap; end += gap)
			{

				int x = a[end + gap];
				while (end >= 0)
				{
					if (a[end] > x)
					{
						a[end + gap] = a[end];
						end -= gap;
					}
					else
					{
						break;
					}
				}
				a[end + gap] = x;
			}
		}
	}
}

//希尔排序稍加改动（减少了循环嵌套，代码简化，但效率并未优化）
void ShellSort2(int* a, int n)
{
	int gap = n;
	while (gap>1)
	{
		gap /= 2;

		int i = 0;
		for (i = 0; i < n - gap; i++)
		{
			int end = i;
			int x = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > x)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = x;
		}
	}
}


void Swap(int* p, int* q)
{
	int tmp = *p;
	*p = *q;
	*q = tmp;
}

//选择排序
void SelectSort(int* a, int n)
{
	int begin = 0; 
	int end = n - 1;
	while (begin < end)
	{
		int maxi = begin;
		int mini = begin;
		for (int i = begin; i <= end; i++)
		{
			if (a[maxi] < a[i])
			{
				maxi = i;
			}
			if (a[mini] > a[i])
			{
				mini = i;
			}
		}
		Swap(&a[begin], &a[mini]);
		//begin == maxi 时，最大的数被换到了mini的标记处，需要修正一下maxi的位置
		if (begin == maxi)
		{
			maxi = mini;
		}
		Swap(&a[end], &a[maxi]);
		begin++;
		end--;
	}
}



//解决快排面对有序的选keyi问题：
//  1.随机选key（但是由于是随机，也不大好）
//  2.三数取中 （更好一些）   左边、中间、右边取不是最大也不是最小的那个做key

int GetMidIndex(int* a, int left, int right)
{
	int mid = left + (right - left) / 2;
	if (a[left] < a[mid])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else if (a[left] > a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
	else
	{
		if (a[mid] > a[right])
		{
			return mid;
		}
		else if (a[left] < a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}

}


//hoare版本单趟循环
int Partion1(int* a, int left, int right)
{
	//下面两句代码为改进后所增加
	int mini = GetMidIndex(a, left, right);
	Swap(&a[mini], &a[left]);


	int keyi = left;
	while (left < right)
	{
		while (left < right && a[right] >= a[keyi])
		{
			right--;
		}
		while (left < right && a[left] <= a[keyi])
		{
			left++;
		}
		Swap(&a[left], &a[right]);
	}
	Swap(&a[keyi], &a[left]);
	return left;
}


//挖坑法
int Partion(int* a, int left, int right)
{
	//三数取中
	int mini = GetMidIndex(a, left, right);
	Swap(&a[mini], &a[left]);

	int key = a[left];
	int pivot = left;
	while (left < right)
	{
		//右边找比key的值小的数，放入左边的坑里
		while (left < right && a[right] >= key)
		{
			right--;
		}
		a[pivot] = a[right];
		pivot = right;

		//左边找比key 的值大的数，放入右边的坑里
		while (left < right && a[left] <= key)
		{
			left++;
		}
		a[pivot] = a[left];
		pivot = left;

	}
	a[pivot] = key;
	return pivot;

}

//快速排序
void QuickSort(int* a, int left,int right)
{
	if (left >= right)
	{
		return;
	}
	int keyi = Partion(a, left, right);
	QuickSort(a, left, keyi - 1);
	QuickSort(a, keyi + 1, right);
}

//递归程序的缺陷：
//  1.相比循环程序，性能差。（针对早期编译器，对于递归调用，建立栈帧优化不大。现在编译器优化都很好，递归相比循环性能差不了多少）
//  2.递归深度太深，会导致栈溢出。

