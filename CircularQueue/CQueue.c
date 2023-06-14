#define _CRT_SECURE_NO_WARNINGS 1
#include"CQueue.h"


//初始化
void CQueueInit(CQueue* pcq)
{
	assert(pcq);
	CQNode* phead = (CQNode*)malloc(sizeof(CQNode));
	if (NULL == phead)
	{
		printf("malloc failed\n");
		exit(-1);
	}
	phead->next = phead;
	pcq->tail = phead;

}

//销毁
void CQueueDestroy(CQueue* pcq)
{
	assert(pcq);
	CQNode* phead = pcq->tail->next;
	CQNode* cur = phead->next;
	while (cur != phead)
	{
		CQNode* next = cur->next;
		free(cur);
		cur = NULL;
		cur = next;
	}
	free(phead);
	phead = NULL;
}

//入队
void CQueuePush(CQueue* pcq, CQDataType x)
{
	assert(pcq);
	CQNode* cur = pcq->tail;
	CQNode* phead = cur->next;
	CQNode* tmp = (CQNode*)malloc(sizeof(CQNode));
	if (NULL == tmp)
	{
		printf("malloc failed\n");
		exit(-1);
	}
	tmp->data = x;
	tmp->next = phead;
	cur->next = tmp;
	pcq->tail = tmp;
}

//出队
void CQueuePop(CQueue* pcq)
{
	assert(pcq);
	assert(pcq->tail->next != pcq->tail);

	CQNode* phead = pcq->tail->next;
	CQNode* cur = phead->next;
	CQNode* next = cur->next;

	//如果队列中只有一个数据节点，则将tail赋给哨兵位
	if (phead == next)
	{
		pcq->tail = phead;
	}

	phead->next = next;
	
	free(cur);
	cur = NULL;
}

//打印
void CQueueShow(const CQueue* pcq)
{
	assert(pcq);
	CQNode* phead = pcq->tail->next;
	CQNode* cur = phead->next;
	printf("phead->");
	while (cur != phead)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("phead\n");

}

//置空队列
void CQueueEmpty(CQueue* pcq)
{
	assert(pcq);
	assert(pcq->tail->next != pcq->tail);

	CQNode* phead = pcq->tail->next;
	CQNode* cur = phead->next;

	while (cur != phead)
	{
		CQNode* next = cur->next;
		free(cur);
		cur = NULL;
		cur = next;
	}
	pcq->tail = phead;
	phead->next = phead;
}

//判断队列是否为空
bool CQueueIsEmpty(const CQueue* pcq)
{
	assert(pcq);
	if (pcq->tail == pcq->tail->next)
	{
		return true;
	}
	else
	{
		return false;
	}
}