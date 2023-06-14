#pragma once

//假设以带头节点的循环链表表示队列，并且只设一个指针指向队尾元素节点
//（注意：不设头指针） ，编写相应的置空队列、判断队列是否为空、
//入队和出队等

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int CQDataType;


typedef struct CQueueNode
{
	CQDataType data;
	struct CQueueNode* next;
}CQNode;

typedef struct CQueue
{
	CQNode* tail;
}CQueue;


//初始化
void CQueueInit(CQueue* pcq);

//销毁
void CQueueDestroy(CQueue* pcq);

//入队
void CQueuePush(CQueue* pcq, CQDataType x);

//出队
void CQueuePop(CQueue* pcq);

//打印
void CQueueShow(const CQueue* pcq);

//置空队列
void CQueueEmpty(CQueue* pcq);

//判断队列是否为空
bool CQueueIsEmpty(const CQueue* pcq);