#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

//扩容
void SeqListCheckCapacity(SL* ps)
{
	//如果没有空间或者空间不足，就扩容
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc failed.\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}

void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListDestroy(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

void SeqListPushBack(SL* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}

void SeqListPopBack(SL* ps)
{
	assert(ps->size > 0);
	ps->size--;
}

void SeqListPushFront(SL* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);
	//挪动数据
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}

void SeqListPopFront(SL* ps)
{
	assert(ps->size);

	int begin = 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}

	ps->size--;
}

void SeqListFind(SL* ps, SLDataType x)
{
	assert(ps->size);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			printf("%d的位置在：第%d个\n", x, i + 1);
			return;
		}
	}
	printf("找不到该数字\n");
}

void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	if (pos == 1)
	{
		SeqListPushFront(ps, x);
		return;
	}
	if (pos == ps->size + 1)
	{
		SeqListPushBack(ps, x);
		return;
	}
	assert(pos > 0 && pos <= ps->size);
	SeqListCheckCapacity(ps);

	ps->size++;
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end] = ps->a[end - 1];
		end--;
	}
	ps->a[pos - 1] = x;
}

void SeqListErease(SL* ps, int pos)
{
	assert(ps->size >= pos);
	if (pos == 1)
	{
		SeqListPopFront(ps);
		return;
	}
	if (pos == ps->size)
	{
		SeqListPopBack(ps);
		return;
	}

	int begin = pos;
	while (begin < ps->size)
	{
		ps->a[begin-1] = ps->a[begin];
		begin++;
	}

	ps->size--;
}


//时间复杂度为O(n),空间复杂度为O(1),删除顺序表中所有值为item的数据元素
void SeqListPopItem(SL* ps, SLDataType item)
{
	assert(ps);
	SLDataType* tmp = ps->a;
	SLDataType* next = ps->a;
	int count = 0;

	//找到第一个值为item的数据元素
	while (*tmp != item && tmp < (ps->a + ps->size))
	{
		tmp++;
	}
	tmp = next;

	//挪动数据
	while (next < (ps->a + ps->size) && tmp < (ps->a + ps->size))
	{


		while (*next == item && next < (ps->a + ps->size))
		{
			count++;
			next++;
		}

		while (*next != item && next < (ps->a + ps->size))
		{
			*tmp = *next;
			next++;
			tmp++;
		}
	}
	(ps->size) -= count;
}