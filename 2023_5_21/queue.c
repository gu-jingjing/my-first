#define _CRT_SECURE_NO_WARNINGS 1
#include"queue.h"

// 初始化队列 
void QueueInit(Queue* q)
{
	assert(q);
	q->front = q->rear = NULL;
}

// 队尾入队列 
void QueuePush(Queue* q, QDataType data)
{
	QNode* tmp = (QNode*)malloc(sizeof(QNode));
	if (tmp == NULL)
	{
		printf("malloc failed");
		return;
	}
	tmp->data = data;
	tmp->next = NULL;

	if (q->front == NULL)
	{
		q->front = q->rear = tmp;
	}
	else
	{
		q->rear->next = tmp;
		q->rear = tmp;
	}
}

// 队头出队列 
void QueuePop(Queue* q)
{
	assert(q->front);

	QNode* del = q->front;
	QNode* newfront = q->front->next;
	free(del);
	q->front = newfront;
}

// 获取队列头部元素 
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(q->front);

	return q->front->data;
}

// 获取队列队尾元素 
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(q->front);
	
	return q->rear->data;
}

// 获取队列中有效元素个数 
int QueueSize(Queue* q)
{
	assert(q);

	int count = 0;
	QNode* cur = q->front;
	while (cur)
	{
		count++;
		cur = cur->next;
	}
	return count;
}

// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
int QueueEmpty(Queue* q)
{
	assert(q);

	return q->front == NULL;
}

// 销毁队列 
void QueueDestroy(Queue* q)
{
	assert(q);

	QNode* cur = q->front;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}

	q->front = q->rear = NULL;
}
