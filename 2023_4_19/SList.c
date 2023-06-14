#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

// ��̬����һ���ڵ�
SListNode* BuySListNode(SLTDateType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode) * 1);
	if (newnode == NULL)
	{
		perror(malloc);
		return;
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

// �������ӡ
void SListPrint(SListNode* plist)
{
	SListNode* cur = plist;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
// ������β��
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	SListNode* cur = *pplist;
	SListNode* newnode = BuySListNode(x);

	if (cur == NULL)
	{
		*pplist = newnode;
		return;
	}

	while (cur->next)
	{
		cur = cur->next;
	}
	cur->next = newnode;
}

// �������ͷ��
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}

// �������βɾ
void SListPopBack(SListNode** pplist)
{
	assert(pplist);
	if (*pplist == NULL)
	{
		return;
	}

	SListNode* cur = *pplist;

	if (cur->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
		return;
	}

	while (cur->next->next)
	{
		cur = cur->next;
	}
	SListNode* tmp = cur->next;
	cur->next = NULL;
	free(tmp);
	
}

// ������ͷɾ
void SListPopFront(SListNode** pplist)
{
	assert(pplist);
	if (*pplist == NULL)
	{
		return;
	}
	SListNode* next = (*pplist)->next;
	free(*pplist);
	*pplist = next;
}

// ���������
SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	assert(plist);
	SListNode* cur = plist;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
}

// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos);
	SListNode* newnode = BuySListNode(x);
	SListNode* next = pos->next;
	pos->next = newnode;
	newnode->next = next;
}

// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SListNode* pos)
{
	assert(pos->next);
	SListNode* next = pos->next->next;
	free(pos->next);
	pos->next = next;
}

// �����������
void SListDestroy(SListNode* plist)
{
	assert(plist);
	SListNode* cur = plist;
	while (cur)
	{
		SListNode* next = cur->next;
		free(cur);
		cur = next;
	}
}