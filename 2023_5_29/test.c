#define _CRT_SECURE_NO_WARNINGS 1
#include"heap.h"


void HeapTest1()
{
	Heap* hp = (Heap*)malloc(sizeof(Heap));
	int n = 8;
	int* a = (int*)malloc(sizeof(int) * n);

	HeapCreate(hp, a, n);
	HeapPush(hp, 5);
	printf("%d\n", HeapTop(hp));

	HeapPush(hp, 4);
	printf("%d\n", HeapTop(hp));

	HeapPush(hp, 3);
	printf("%d\n", HeapTop(hp));

	HeapPush(hp, 1);
	printf("%d\n", HeapTop(hp));

	HeapShow(hp);


	HeapPop(hp);
	HeapShow(hp);

	HeapPop(hp);
	HeapShow(hp);

	HeapPop(hp);
	HeapShow(hp);


	HeapDestory(hp);
}

void HeapTest2()
{
	Heap* hp = (Heap*)malloc(sizeof(Heap));
	int n = 8;
	int* a = (int*)malloc(sizeof(int) * n);

	HeapCreate(hp, a, n);
	HeapPush(hp, 9);
	HeapPush(hp, 6);
	HeapPush(hp, 7);
	HeapPush(hp, 4);
	HeapPush(hp, 8);
	HeapPush(hp, 2);
	HeapPush(hp, 3);
	HeapPush(hp, 5);
	HeapPush(hp, 1);
	HeapPush(hp, 88);
	HeapPush(hp, 0);

	HeapShow(hp);

	HeapSort(hp->a, 11);

	HeapShow(hp);

	HeapDestory(hp);
}

void CreateNData()
{
	// 造数据
	int n = 10000;
	srand(time(0));
	const char* file = "data.txt";
	FILE* fin = fopen(file, "w");
	if (fin == NULL)
	{
		perror("fopen error");
		return;
	}

	for (size_t i = 0; i < n; ++i)
	{
		int x = rand((unsigned int)time(NULL)) % 1000000;
		if (i > n - 10)
		{
			x += 1000000;
		}
		fprintf(fin, "%d\n", x);
	}

	fclose(fin);
}

void PrintTopK(int k)
{
	FILE* fout = fopen("data.txt", "r");

	if (fout == NULL)
	{
		perror("fout error\n");
		return;
	}

	int* heap = (int*)malloc(sizeof(int) * k);

	if (heap == NULL)
	{
		perror("malloc error\n");
		return;
	}

	for (int i = 0; i < k; i++)
	{
		fscanf(fout, "%d", &heap[i]);
	}

	//建立小堆
	for (int i = (k - 1) / 2; i > 0; i--)
	{
		AdjustDowna(heap, i, k);
	}

	int val = 0;
	while (!feof(fout))
	{
		fscanf(fout, "%d", &val);
		if (val > heap[0])
		{
			heap[0] = val;
			AdjustDowna(heap, 0, k);
		}
	}

	for (int j = 0; j < k; j++)
	{
		printf("%d ", heap[j]);
	}
	printf("\n");
}

int main()
{
	CreateNData();
	PrintTopK(10);

	return 0;
}