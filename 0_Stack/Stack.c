#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

void CheckCapacity(ST* ps)
{
	if (ps->top == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = realloc(ps->a, sizeof(STDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc failed!\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}

void StackInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}
void StackDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}

void StackPush(ST* ps, STDataType x)
{
	assert(ps);

	CheckCapacity(ps);

	ps->a[ps->top] = x;
	ps->top++;
}

void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}

STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}

int StackSize(ST* ps)
{
	assert(ps);

	return ps->top;
}

bool StackEmpty(ST* ps)
{
	assert(ps);
	//if (ps->top == 0)
	//{
	//	return true;
	//}
	//else
	//{
	//	return false;
	//}
	return ps->top == 0;
}

//判定给定的字符序列是否回文
//"abba" "abdba"
bool IsPalindromeSequence(char* arr, int size)
{
	ST st;
	StackInit(&st);

	int i = 0;
	for (i = 0; i < size / 2; i++)
	{
		StackPush(&st, *(arr + i));
	}

	int j = (size + 1) / 2;
	int flag = 1;
	while (!StackEmpty(&st))
	{
		if (StackTop(&st) != *(arr + j))
		{
			flag = 0;
			break;
		}
		StackPop(&st);
		j++;
	}
	StackDestroy(&st);
	return flag;
}