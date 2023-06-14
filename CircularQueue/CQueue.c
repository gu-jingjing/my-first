#define _CRT_SECURE_NO_WARNINGS 1
#include"CQueue.h"


//��ʼ��
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

//����
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

//���
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

//����
void CQueuePop(CQueue* pcq)
{
	assert(pcq);
	assert(pcq->tail->next != pcq->tail);

	CQNode* phead = pcq->tail->next;
	CQNode* cur = phead->next;
	CQNode* next = cur->next;

	//���������ֻ��һ�����ݽڵ㣬��tail�����ڱ�λ
	if (phead == next)
	{
		pcq->tail = phead;
	}

	phead->next = next;
	
	free(cur);
	cur = NULL;
}

//��ӡ
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

//�ÿն���
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

//�ж϶����Ƿ�Ϊ��
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