#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

char* GetMemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}

int main()
{
	char* str = NULL;
	str = GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;

	return 0;
}