#define _CRT_SECURE_NO_WARNINGS 1
#include"queue.h"

// ��ʼ������ 
void QueueInit(Queue* q)
{
	assert(q);
	q->front = q->rear = NULL;
}

// ��β����� 
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

// ��ͷ������ 
void QueuePop(Queue* q)
{
	assert(q->front);

	QNode* del = q->front;
	QNode* newfront = q->front->next;
	free(del);
	q->front = newfront;
}

// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(q->front);

	return q->front->data;
}

// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(q->front);
	
	return q->rear->data;
}

// ��ȡ��������ЧԪ�ظ��� 
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

// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
int QueueEmpty(Queue* q)
{
	assert(q);

	return q->front == NULL;
}

// ���ٶ��� 
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
