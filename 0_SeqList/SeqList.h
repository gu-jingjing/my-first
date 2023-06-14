#pragma once

//#include<stdio.h>
//
//#define N 100
//typedef int SLDateType;
//
////静态顺序表
//typedef struct SeqList
//{
//	SLDateType a[N];
//	int size;  //表示数组中存储的数据多少个
//
//}SL;
//
//
////接口函数
//void SeqListInit(SL* ps, SLDateType x);
//
////静态的特点：如果满了就不让插入   缺点：给多少合适？很难确定
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

//动态顺序表
typedef struct SeqList
{
	SLDataType* a;
	int size;  //表示数组中存储的数据多少个
	int capacity;  //表示数组实际能存数据的空间容量是多大
}SL;

void SeqListPrint(SL* ps);
//接口函数
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


//删除所有值为item的数据元素
void SeqListPopItem(SL* ps, SLDataType x);