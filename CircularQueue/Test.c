#define _CRT_SECURE_NO_WARNINGS 1
#include"CQueue.h"

void Test1()
{
	CQueue cq;
	CQueueInit(&cq);
	CQueuePush(&cq, 1);
	CQueuePush(&cq, 2);
	CQueuePush(&cq, 3);
	CQueuePush(&cq, 4);
	CQueueShow(&cq);

	CQueuePop(&cq);
	CQueueShow(&cq);

	CQueuePop(&cq);
	CQueueShow(&cq);

	CQueuePop(&cq);
	CQueueShow(&cq);

	CQueuePop(&cq);
	CQueueShow(&cq);

	CQueuePush(&cq, 5);
	CQueueShow(&cq);

	CQueueDestroy(&cq);
}

void Test2()
{
	CQueue cq;
	CQueueInit(&cq);

	CQueuePush(&cq, 1);
	CQueuePush(&cq, 2);
	CQueuePush(&cq, 3);
	CQueuePush(&cq, 4);

	CQueueShow(&cq);

	if (CQueueIsEmpty(&cq))
	{
		printf("IsEmpty\n");
	}
	else
	{
		printf("IsNotEmpty\n");
	}

	CQueueEmpty(&cq);
	CQueueShow(&cq);

	if (CQueueIsEmpty(&cq))
	{
		printf("IsEmpty\n");
	}
	else
	{
		printf("IsNotEmpty\n");
	}

	CQueuePush(&cq, 1);
	CQueuePush(&cq, 2);
	CQueuePush(&cq, 3);

	CQueueShow(&cq);

	CQueueDestroy(&cq);
}

int main()
{
	//Test1();
	Test2();

	return 0;
}