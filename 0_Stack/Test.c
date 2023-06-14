#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

void TestStack()
{
	ST st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);

	while (!StackEmpty(&st))
	{
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}

	StackDestroy(&st);

}

void Test1()
{
	char arr[] = "abdba";
	int size = strlen(arr);
	int ret = IsPalindromeSequence(arr, size);
	if (ret)
	{
		printf("IsPalindromeSequence");
	}
	else
	{
		printf("IsNotPalindromeSequence");
	}
}

int main()
{
	//TestStack();
	Test1();

	return 0;
}