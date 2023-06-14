#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

void ListPrint(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead;
	while (cur->next != phead)
	{
		cur = cur->next;
		printf("%d ", cur->data);
	}
	printf("\n");

}

 LTNode* ListInit()
{
	//哨兵位的头结点
	LTNode* phead = (LTNode*)malloc(sizeof(LTNode));
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

void ListPushBack(LTNode* phead, LTDateType x)
{
	assert(phead);
	LTNode* tail = phead->prev;
	LTNode* newnode = (LTNode*) malloc(sizeof(LTNode));
	newnode->data = x;
	tail->next = newnode;
	newnode->prev = tail;
	phead->prev = newnode;
	newnode->next = phead;
}

void ListPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LTNode* tail = phead->prev;
	phead->prev = tail->prev;
	tail->prev->next = phead;

	free(tail);
}

void ListPushFront(LTNode* phead, LTDateType x)
{
	assert(phead);
	LTNode* next = phead->next;
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	newnode->data = x;

	phead->next = newnode;
	newnode->prev = phead;
	newnode->next = next;
	next->prev = newnode;
}

void ListPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LTNode* next = phead->next;
	LTNode* nnext = next->next;
	
	phead->next = nnext;
	nnext->prev = phead;

	free(next);
}

LTNode* ListFind(LTNode* phead, LTDateType x)
{
	assert(phead);

	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}

	return NULL;
}

//pos之前插入
void ListInsert(LTNode* pos, LTDateType x)
{
	assert(pos);
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	newnode->data = x;
	LTNode* posPrev = pos->prev;
	
	newnode->prev = posPrev;
	posPrev->next = newnode;

	newnode->next = pos;
	pos->prev = newnode;
}

//删除pos位置
void ListErase(LTNode* pos)
{
	assert(pos);

	LTNode* posPrev = pos->prev;
	LTNode* posNext = pos->next;

	posPrev->next = posNext;
	posNext->prev = pos->prev;

	free(pos);
	pos = NULL;
}

void ListDestroy(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
	phead = NULL;
}