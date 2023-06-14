#define _CRT_SECURE_NO_WARNINGS 1

#include"sort.h"

//��ӡ
void PrintArray(int* a, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

//��������
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



//ϣ������
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

//ϣ�������ԼӸĶ���������ѭ��Ƕ�ף�����򻯣���Ч�ʲ�δ�Ż���
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

//ѡ������
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
		//begin == maxi ʱ����������������mini�ı�Ǵ�����Ҫ����һ��maxi��λ��
		if (begin == maxi)
		{
			maxi = mini;
		}
		Swap(&a[end], &a[maxi]);
		begin++;
		end--;
	}
}



//���������������ѡkeyi���⣺
//  1.���ѡkey�����������������Ҳ����ã�
//  2.����ȡ�� ������һЩ��   ��ߡ��м䡢�ұ�ȡ�������Ҳ������С���Ǹ���key

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


//hoare�汾����ѭ��
int Partion1(int* a, int left, int right)
{
	//�����������Ϊ�Ľ���������
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


//�ڿӷ�
int Partion(int* a, int left, int right)
{
	//����ȡ��
	int mini = GetMidIndex(a, left, right);
	Swap(&a[mini], &a[left]);

	int key = a[left];
	int pivot = left;
	while (left < right)
	{
		//�ұ��ұ�key��ֵС������������ߵĿ���
		while (left < right && a[right] >= key)
		{
			right--;
		}
		a[pivot] = a[right];
		pivot = right;

		//����ұ�key ��ֵ������������ұߵĿ���
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

//��������
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

//�ݹ�����ȱ�ݣ�
//  1.���ѭ���������ܲ��������ڱ����������ڵݹ���ã�����ջ֡�Ż��������ڱ������Ż����ܺã��ݹ����ѭ�����ܲ�˶��٣�
//  2.�ݹ����̫��ᵼ��ջ�����

