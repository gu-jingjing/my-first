#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

typedef char STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

void StackInit(ST* ps);
void StackDestroy(ST* ps);

void StackPush(ST* ps, STDataType x);
void StackPop(ST* ps);

STDataType StackTop(ST* ps);

int StackSize(ST* ps);

bool StackEmpty(ST* ps);

//判定给定的字符序列是否回文
//"abba" "abdba"
bool IsPalindromeSequence(char* arr, int size);