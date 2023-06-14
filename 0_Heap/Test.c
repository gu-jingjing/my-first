#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"



int main()
{
	int a[] = { 75,70,25,15,56,10,30 };
	HP hp;
	HeapInit(&hp);
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		HeapPush(&hp, a[i]);

	}
	HeapPrint(&hp);

	HeapPop(&hp);
	HeapPrint(&hp);

	HeapPop(&hp);
	HeapPrint(&hp);

	HeapPop(&hp);
	HeapPrint(&hp);

	HeapDestroy(&hp);

	return 0;
}