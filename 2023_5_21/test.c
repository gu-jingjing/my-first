#define _CRT_SECURE_NO_WARNINGS 1
#include"queue.h"
#include"stack.h"

void QueueTest()
{
	Queue q1;
	QueueInit(&q1);
	QueuePush(&q1, 1);
	QueuePush(&q1, 2);
	QueuePush(&q1, 3);
	QueuePush(&q1, 4);
	QueuePush(&q1, 5);

	QueuePop(&q1);

	printf("%d\n", QueueFront(&q1));
	printf("%d\n", QueueBack(&q1));
	printf("%d\n", QueueSize(&q1));
	printf("%d\n", QueueEmpty(&q1));

	QueueDestroy(&q1);

}

void StackTest()
{
	Stack st;
	StackInit(&st);

	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);

	StackPop(&st);
	printf("%d\n", StackEmpty(&st));
	printf("%d\n", StackTop(&st));
	printf("%d\n", StackSize(&st));

	StackPop(&st);
	printf("%d\n", StackEmpty(&st));
	printf("%d\n", StackTop(&st));
	printf("%d\n", StackSize(&st));

	StackPop(&st);
	printf("%d\n", StackEmpty(&st));
	printf("%d\n", StackTop(&st));
	printf("%d\n", StackSize(&st));

	StackPop(&st);
	printf("%d\n", StackEmpty(&st));
	printf("%d\n", StackTop(&st));
	printf("%d\n", StackSize(&st));

	StackPop(&st);
	printf("%d\n", StackEmpty(&st));
	printf("%d\n", StackSize(&st));

	StackDestroy(&st);
}

int main()
{
	//QueueTest();
	StackTest();

	return 0;
}