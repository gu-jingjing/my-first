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
//��posλ��֮ǰ����һ���ڵ�
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

void SListErase(SLTNode** pphead, SLTNode* pos);

void SListDestroy(SLTNode** pphead);

//ͨ��һ�˱���ȷ������Ϊn�ĵ�������ֵ���Ľ��
SLTNode* SListFindMax(SLTNode* pphead);

//�����������н������ӷ���ԭ�ء���ת����Ҫ�������ԭ��Ĵ洢�ռ䣬���仰˵��Ҫ��ռ临�Ӷ�ΪO��1��
void SListReverse(SLTNode** pphead);

//��֪��������A��B�ֱ��ʾ�������ϣ���Ԫ�ص������С����A��B�Ľ���������������A������
void SListIntersectionAandB(SLTNode** ppheadA, SLTNode** ppheadB);

//��һ����ͷ�ڵ�ĵ�����A�ֽ������������ͬ�ṹ������B��C������B��Ľ��ΪA����ֵС��0�Ľ��
//��C��Ľ��ΪA����ֵ����0�Ľ�㣨����A�е�Ԫ��Ϊ����������Ҫ��B��C������A��Ľ��
//ע�⣺����ӿ��Ǵ��ڱ�λ��
void SListSeparate(SLTNode* pheadA, SLTNode* pheadB, SLTNode* pheadC);

//�ݹ����ͷ������������
SLTDataType SListMax(SLTNode* phead);