#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

// 动态申请一个节点
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

// 单链表打印
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
// 单链表尾插
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

// 单链表的头插
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}

// 单链表的尾删
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

// 单链表头删
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

// 单链表查找
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

// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？
void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos);
	SListNode* newnode = BuySListNode(x);
	SListNode* next = pos->next;
	pos->next = newnode;
	newnode->next = next;
}

// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？
void SListEraseAfter(SListNode* pos)
{
	assert(pos->next);
	SListNode* next = pos->next->next;
	free(pos->next);
	pos->next = next;
}

// 单链表的销毁
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