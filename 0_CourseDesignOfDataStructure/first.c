#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>


//7-3 ����ƥ��
//���� 40
//���� ��͢Ԫ
//��λ �й����ú��շ���ѧԺ
//����һ���ַ���������100���ַ������ܰ������š����֡���ĸ�������š��ո񣬱�̼����һ���ַ��е�(), [], { }�Ƿ�ƥ�䡣
//
//�����ʽ :
//������һ���и���һ���ַ�����������100���ַ������ܰ������š����֡���ĸ�������š��ո�
//
//�����ʽ :
//���������ԣ����yes���������no��
// ֧�ֶ�̬������ջ
typedef char STDataType;//������������
//����ջ
typedef struct Stack
{
	STDataType* a;
	int top;		// ջ��
	int capacity;  // ���� 
}Stack;

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
	//ջ��������
	if (ps->top == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newcapacity);

		//����ʧ��
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
	if (ps->top == 0)
	{
		return;
	}
	ps->top--;
}


// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
int StackEmpty(Stack* ps)
{
	return ps->top == 0;
}


// ��ȡջ��Ԫ�� 
STDataType StackTop(Stack* ps)
{
	if (ps->top == 0)
	{
		return -1;
	}


	return ps->a[ps->top - 1];
}


bool isValid(char* s) {
	//ʹ��ջ��Ϊ�����ṹ
	Stack st;
	StackInit(&st);
	//�����ַ�������
	int len = strlen(s);
	while (len)
	{
		//��������������ջ
		if (*s == '(' || *s == '[' || *s == '{')
		{
			StackPush(&st, *s);
		}
		//����������ʱ���ջ��ʹ���������������Ž���ƥ��
		if (*s == ')' || *s == ']' || *s == '}')
		{
			//�������ţ��������ţ�����false
			if (StackEmpty(&st))
			{
				return false;
			}
			//��ʱ�����������������ţ���ȡջ��Ԫ��
			char tmp = StackTop(&st);
			StackPop(&st);

			//����ƥ�������
			if ((tmp == '(' && *s == ')')
				|| (tmp == '[' && *s == ']')
				|| (tmp == '{' && *s == '}'))
			{
				;
			}
			//���򷵻�false
			else
			{
				return false;
			}
		}
		//����
		s++;
		len--;
	}

	//�����ջ�л���Ԫ��ʱ��˵�������޷���ȫƥ�䣬����false
	if (!StackEmpty(&st))
	{
		return false;
	}
	//����������ַ���Ϊ��ʱ������true
	return true;
}

int main()
{
	char s[101] = { 0 };
	int i = 0;
	gets(s);
	if (isValid(s))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}