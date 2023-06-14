#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

SLTNode* BuyListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		printf("malloc failed.\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
}

void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SListPushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuyListNode(x);

	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//�ҵ�β���
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = newnode;
	}
}

void SListPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuyListNode(x);

	newnode->next = *pphead;
	*pphead = newnode;
}

void SListPopBack(SLTNode** pphead)
{
	assert(*pphead != NULL);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* tail = *pphead;
		SLTNode* prev = NULL;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;

		prev->next = NULL;
	}
}

void SListPopFront(SLTNode** pphead)
{
	assert(*pphead);
	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

SLTNode* SListFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	return NULL;
}

void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	SLTNode* newnode = BuyListNode(x);
	if (*pphead == pos)
	{
		newnode->next = *pphead;
		*pphead = newnode;
	}
	else
	{
		SLTNode* posPrev = *pphead;
		while (posPrev->next != pos)
		{
			posPrev = posPrev->next;
		}

		posPrev->next = newnode;
		newnode->next = pos;

	}
}

void SListErase(SLTNode** pphead, SLTNode* pos)
{
	if (*pphead == pos)
	{
		*pphead = pos->next;
		free(pos);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
	}
}

void SListDestroy(SLTNode** pphead)
{
	assert(*pphead);
	SLTNode* cur = *pphead;
	SLTNode* next = (*pphead)->next;
	while (next)
	{
		free(cur);
		cur = next;
		next = next->next;
	}
	free(cur);
	*pphead = NULL;
}

//ͨ��һ�˱���ȷ������Ϊn�ĵ�������ֵ���Ľ��
SLTNode* SListFindMax(SLTNode* pphead)
{
	assert(pphead);
	SLTNode* cur = pphead;
	SLTNode* maxnode = pphead;
	SLTDataType max = pphead->data;
	while (cur)
	{
		if (cur->data > max)
		{
			max = cur->data;
			maxnode = cur;
		}
		cur = cur->next;
	}
	return maxnode;
}


//�����������н������ӷ���ԭ�ء���ת����Ҫ�������ԭ��Ĵ洢�ռ䣬���仰˵��Ҫ��ռ临�Ӷ�ΪO��1��
void SListReverse(SLTNode** pphead) 
{
	SLTNode* head = *pphead;   //��ָ����ÿ��ѭ����ʼ��ָ��ǰ�����ͷ
	SLTNode* tmp = head->next; //��ָ����ÿ��ѭ����ʼ��ָ��Ҫ����ɾͷ��Ľڵ�
	SLTNode* oldhead = *pphead;   //��ָ����ÿ��ѭ����ʼ��ָ��ԭ����ͷ��㣬����ı�ָ��
	while (tmp) //���tmpΪ�գ�����������������ͷ��next�Ѿ��ǿյ��ˣ���Ϊ�������ĩβ
	{
		oldhead->next = tmp->next; //��tmp�ܿգ�ʵ���Ǻ�ɾ������һ����
		tmp->next = head; //��tmp����µ�ͷ��ʵ����ͷ�������һ���� 
		head = tmp; //��ͷ
		tmp = oldhead->next; //��tmp����´�ѭ���д�ɾ���Ľڵ�
	}
	*pphead = head;
}

//��֪��������A��B�ֱ��ʾ�������ϣ���Ԫ�ص������С����A��B�Ľ���������������A������
void SListIntersectionAandB(SLTNode** ppheadA, SLTNode** ppheadB)
{
	SLTNode* curA = *ppheadA;
	SLTNode* curB = *ppheadB;

	while (curA && curB)
	{
		if (curA->data == curB->data)
		{
			curA = curA->next;
			curB = curB->next;
		}
		else if (curA->data < curB->data)
		{
			SLTNode* nextA = curA->next;
			SListErase(ppheadA, curA);
			curA = nextA;
		}
		else if (curB->data < curA->data)
		{
			curB = curB->next;
		}
	}

}

//��һ����ͷ�ڵ�ĵ�����A�ֽ������������ͬ�ṹ������B��C������B��Ľ��ΪA����ֵС��0�Ľ��
//��C��Ľ��ΪA����ֵ����0�Ľ�㣨����A�е�Ԫ��Ϊ����������Ҫ��B��C������A��Ľ��
//ע�⣺����ӿ��Ǵ��ڱ�λ��
void SListSeparate(SLTNode* pheadA, SLTNode* pheadB, SLTNode* pheadC)
{
	SLTNode* curA = pheadA->next;
	SLTNode* curB = pheadB;
	SLTNode* curC = pheadC;

	while (curA)
	{
		if (curA->data < 0)
		{
			curB->next = curA;
			curA = curA->next;
			curB = curB->next;
			curB->next = NULL;
		}

		if (curA && curA->data > 0)
		{
			curC->next = curA;
			curA = curA->next;

			curC = curC->next;
			curC->next = NULL;
		}

	}
}

//�ݹ���������������
SLTDataType SListMax(SLTNode* phead)
{
	assert(phead);
	if (phead->next)
	{
		return phead->data > SListMax(phead->next) ? phead->data : SListMax(phead->next);
	}
	else
	{
		return phead->data;
	}
}