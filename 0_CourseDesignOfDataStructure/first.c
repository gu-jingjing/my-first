#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>


//7-3 括号匹配
//分数 40
//作者 李廷元
//单位 中国民用航空飞行学院
//给定一串字符，不超过100个字符，可能包括括号、数字、字母、标点符号、空格，编程检查这一串字符中的(), [], { }是否匹配。
//
//输入格式 :
//输入在一行中给出一行字符串，不超过100个字符，可能包括括号、数字、字母、标点符号、空格。
//
//输出格式 :
//如果括号配对，输出yes，否则输出no。
// 支持动态增长的栈
typedef char STDataType;//定义数据类型
//定义栈
typedef struct Stack
{
	STDataType* a;
	int top;		// 栈顶
	int capacity;  // 容量 
}Stack;

// 初始化栈 
void StackInit(Stack* ps)
{
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}


// 入栈 
void StackPush(Stack* ps, STDataType data)
{
	//栈满则扩容
	if (ps->top == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newcapacity);

		//扩容失败
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


// 出栈 
void StackPop(Stack* ps)
{
	if (ps->top == 0)
	{
		return;
	}
	ps->top--;
}


// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
int StackEmpty(Stack* ps)
{
	return ps->top == 0;
}


// 获取栈顶元素 
STDataType StackTop(Stack* ps)
{
	if (ps->top == 0)
	{
		return -1;
	}


	return ps->a[ps->top - 1];
}


bool isValid(char* s) {
	//使用栈作为辅助结构
	Stack st;
	StackInit(&st);
	//计算字符串长度
	int len = strlen(s);
	while (len)
	{
		//遇到左括号则入栈
		if (*s == '(' || *s == '[' || *s == '{')
		{
			StackPush(&st, *s);
		}
		//遇到右括号时则出栈，使得左括号与右括号进行匹配
		if (*s == ')' || *s == ']' || *s == '}')
		{
			//有右括号，无左括号，返回false
			if (StackEmpty(&st))
			{
				return false;
			}
			//此时有右括号且有左括号，获取栈顶元素
			char tmp = StackTop(&st);
			StackPop(&st);

			//括号匹配则继续
			if ((tmp == '(' && *s == ')')
				|| (tmp == '[' && *s == ']')
				|| (tmp == '{' && *s == '}'))
			{
				;
			}
			//否则返回false
			else
			{
				return false;
			}
		}
		//迭代
		s++;
		len--;
	}

	//当最后栈中还有元素时，说明括号无法完全匹配，返回false
	if (!StackEmpty(&st))
	{
		return false;
	}
	//其它情况，字符串为空时，返回true
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