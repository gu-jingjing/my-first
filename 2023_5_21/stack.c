#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"

// ��ʼ��ջ 
void StackInit(Stack* ps)
{
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

// ��ջ 
void StackPush(Stack* ps, STDataType data)
{
	assert(ps);

	if (ps->top == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newcapacity);

		if (tmp == NULL)
		{
			printf("realloc failed");
			return;
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}

	ps->a[ps->top] = data;
	ps->top++;
}

// ��ջ 
void StackPop(Stack* ps)
{
	assert(ps);
	assert(ps->a);
	assert(ps->top);

	ps->top--;
}

// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
int StackEmpty(Stack* ps)
{
	assert(ps);

	return ps->top == 0;
}

// ��ȡջ��Ԫ�� 
STDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));

	return ps->a[ps->top - 1];
}

// ��ȡջ����ЧԪ�ظ��� 
int StackSize(Stack* ps)
{
	assert(ps);

	return ps->top;
}


// ����ջ 
void StackDestroy(Stack* ps)
{
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}