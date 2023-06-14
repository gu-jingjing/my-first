#pragma once

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

void SListPrint(SLTNode* phead);

void SListPushBack(SLTNode** pphead, SLTDataType x);

void SListPushFront(SLTNode** pphead, SLTDataType x);

void SListPopBack(SLTNode** pphead);

void SListPopFront(SLTNode** pphead);

SLTNode* SListFind(SLTNode* phead, SLTDataType x);
//在pos位置之前插入一个节点
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

void SListErase(SLTNode** pphead, SLTNode* pos);

void SListDestroy(SLTNode** pphead);

//通过一趟遍历确定长度为n的单链表中值最大的结点
SLTNode* SListFindMax(SLTNode* pphead);

//将链表中所有结点的链接方向“原地”逆转，即要求仅利用原表的存储空间，换句话说，要求空间复杂度为O（1）
void SListReverse(SLTNode** pphead);

//已知两个链表A和B分别表示两个集合，其元素递增排列。求出A与B的交集，将结果存放在A链表中
void SListIntersectionAandB(SLTNode** ppheadA, SLTNode** ppheadB);

//将一个带头节点的单链表A分解成两个具有相同结构的链表B和C，其中B表的结点为A表中值小于0的结点
//而C表的结点为A表中值大于0的结点（链表A中的元素为非零整数，要求B、C表利用A表的结点
//注意：这个接口是带哨兵位的
void SListSeparate(SLTNode* pheadA, SLTNode* pheadB, SLTNode* pheadC);

//递归求带头链表的最大整数
SLTDataType SListMax(SLTNode* phead);