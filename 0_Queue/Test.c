#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

void TestQueue1()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	QueuePush(&q, 5);

	QueueDestroy(&q);
}

int main()
{
	TestQueue1();

	return 0;
}