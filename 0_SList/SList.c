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
		//找到尾结点
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

//通过一趟遍历确定长度为n的单链表中值最大的结点
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


//将链表中所有结点的链接方向“原地”逆转，即要求仅利用原表的存储空间，换句话说，要求空间复杂度为O（1）
void SListReverse(SLTNode** pphead) 
{
	SLTNode* head = *pphead;   //此指针在每次循环中始终指向当前链表的头
	SLTNode* tmp = head->next; //此指针在每次循环中始终指向要被后删头插的节点
	SLTNode* oldhead = *pphead;   //此指针在每次循环中始终指向原本的头结点，不会改变指向
	while (tmp) //如果tmp为空，则代表逆序结束，旧头的next已经是空的了，成为新链表的末尾
	{
		oldhead->next = tmp->next; //将tmp架空，实际是后删操作的一部分
		tmp->next = head; //让tmp变成新的头，实际是头插操作的一部分 
		head = tmp; //换头
		tmp = oldhead->next; //让tmp变成下次循环中待删除的节点
	}
	*pphead = head;
}

//已知两个链表A和B分别表示两个集合，其元素递增排列。求出A与B的交集，将结果存放在A链表中
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

//将一个带头节点的单链表A分解成两个具有相同结构的链表B和C，其中B表的结点为A表中值小于0的结点
//而C表的结点为A表中值大于0的结点（链表A中的元素为非零整数，要求B、C表利用A表的结点
//注意：这个接口是带哨兵位的
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

//递归求链表的最大整数
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