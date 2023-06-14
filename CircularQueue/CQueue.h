#pragma once

//�����Դ�ͷ�ڵ��ѭ�������ʾ���У�����ֻ��һ��ָ��ָ���βԪ�ؽڵ�
//��ע�⣺����ͷָ�룩 ����д��Ӧ���ÿն��С��ж϶����Ƿ�Ϊ�ա�
//��Ӻͳ��ӵ�

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


//��ʼ��
void CQueueInit(CQueue* pcq);

//����
void CQueueDestroy(CQueue* pcq);

//���
void CQueuePush(CQueue* pcq, CQDataType x);

//����
void CQueuePop(CQueue* pcq);

//��ӡ
void CQueueShow(const CQueue* pcq);

//�ÿն���
void CQueueEmpty(CQueue* pcq);

//�ж϶����Ƿ�Ϊ��
bool CQueueIsEmpty(const CQueue* pcq);