#pragma once

//#include<stdio.h>
//
//#define N 100
//typedef int SLDateType;
//
////��̬˳���
//typedef struct SeqList
//{
//	SLDateType a[N];
//	int size;  //��ʾ�����д洢�����ݶ��ٸ�
//
//}SL;
//
//
////�ӿں���
//void SeqListInit(SL* ps, SLDateType x);
//
////��̬���ص㣺������˾Ͳ��ò���   ȱ�㣺�����ٺ��ʣ�����ȷ��
//void SeqListPushBack(SL* ps, SLDateType x);
//void SeqListPopBack(SL* ps);
//void SeqListPushFront(SL* ps, SLDateType x);
//void SeqListPopFront(SL* ps);
//
//

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDataType;

//��̬˳���
typedef struct SeqList
{
	SLDataType* a;
	int size;  //��ʾ�����д洢�����ݶ��ٸ�
	int capacity;  //��ʾ����ʵ���ܴ����ݵĿռ������Ƕ��
}SL;

void SeqListPrint(SL* ps);
//�ӿں���
void SeqListInit(SL* ps);
void SeqListDestroy(SL* ps);

void SeqListCheckCapacity(SL* ps);

void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);

void SeqListFind(SL* ps, SLDataType x);
void SeqListInsert(SL* ps, int pos, SLDataType x);
void SeqListErease(SL* ps, int pos);


//ɾ������ֵΪitem������Ԫ��
void SeqListPopItem(SL* ps, SLDataType x);