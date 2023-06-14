#define _CRT_SECURE_NO_WARNINGS 1
#include"heap.h"

// �ѵĹ���
void HeapCreate(Heap* hp, HPDataType* a, int n)
{
	assert(hp);
	hp->a = a;
	hp->size = 0;
	hp->capacity = n;
}

// �ѵ�����
void HeapDestory(Heap* hp)
{
	free(hp->a);
	hp->a = NULL;
	free(hp);
}

void Swap(HPDataType* a, HPDataType* b)
{
	HPDataType tmp = *a;
	*a = *b;
	*b = tmp;
}

void AdjustUp(Heap* hp, int child)
{
	assert(hp);
	int parent = (child - 1) / 2;

	while (child > 0)
	{
		if (child >=2 && ((child - 1 - 1) / 2 == parent) && (hp->a[child - 1] < hp->a[child]))
		{
			child--;
		}
		if (hp->a[child] < hp->a[parent])
		{
			Swap(&(hp->a[child]), &(hp->a[parent]));
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

// �ѵĲ���
void HeapPush(Heap* hp, HPDataType x)
{
	assert(hp);

	if (hp->size == hp->capacity)
	{
		int newcapacity = hp->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(hp->a, sizeof(HPDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc failed");
			return;
		}

		hp->a = tmp;
	}

	hp->a[hp->size] = x;
	AdjustUp(hp, hp->size);
	hp->size++;
}

void AdjustDown(Heap* hp, int parent)
{
	assert(hp);

	int child = parent * 2 + 1;
	while (child < hp->size)
	{
		if (child + 1 < hp->size && hp->a[child + 1] < hp->a[child])
		{
			child++;
		}
		if (hp->a[child] < hp->a[parent])
		{
			Swap(&(hp->a[child]), &(hp->a[parent]));
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

// �ѵ�ɾ��
void HeapPop(Heap* hp)
{
	assert(hp);

	hp->a[0] = hp->a[hp->size - 1];
	AdjustDown(hp, 0);

	hp->size--;
}

// ȡ�Ѷ�������
HPDataType HeapTop(Heap* hp)
{
	return hp->a[0];
}

// �ѵ����ݸ���
int HeapSize(Heap* hp)
{
	return hp->size;
}

// �ѵ��п�
int HeapEmpty(Heap* hp)
{
	return hp->size == 0;
}

//��ӡ�ѣ����Բ���
void HeapShow(Heap* hp)
{
	assert(hp);

	int i = 0;
	while (i < hp->size)
	{
		printf("%d  ", hp->a[i]);
		i++;
	}
	printf("\n");
}

void AdjustDowna(HPDataType* a, int parent, int n)
{
	assert(a);

	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child + 1] < a[child])
		{
			child++;
		}
		if (a[child] < a[parent])
		{
			Swap(&(a[child]), &(a[parent]));
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

// ��������ж�����
void HeapSort(int* a, int n)
{
	for (int i = (n - 1) / 2; i >= 0; i--)
	{
		AdjustDowna(a, i, n);
	}

	int end = n - 1;
	while (end > 0)
	{
		Swap(&(a[0]), &(a[end]));
		n--;
		AdjustDowna(a, 0, n);
		end--;
	}
}

