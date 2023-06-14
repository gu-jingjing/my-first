#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

//����
void SeqListCheckCapacity(SL* ps)
{
	//���û�пռ���߿ռ䲻�㣬������
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
	//Ų������
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
			printf("%d��λ���ڣ���%d��\n", x, i + 1);
			return;
		}
	}
	printf("�Ҳ���������\n");
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


//ʱ�临�Ӷ�ΪO(n),�ռ临�Ӷ�ΪO(1),ɾ��˳���������ֵΪitem������Ԫ��
void SeqListPopItem(SL* ps, SLDataType item)
{
	assert(ps);
	SLDataType* tmp = ps->a;
	SLDataType* next = ps->a;
	int count = 0;

	//�ҵ���һ��ֵΪitem������Ԫ��
	while (*tmp != item && tmp < (ps->a + ps->size))
	{
		tmp++;
	}
	tmp = next;

	//Ų������
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