#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<time.h>


typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}Heap;

// 堆的构建
void HeapCreate(Heap* hp, HPDataType* a, int n);

// 堆的销毁
void HeapDestory(Heap* hp);

// 堆的插入
void HeapPush(Heap* hp, HPDataType x);

// 堆的删除
void HeapPop(Heap* hp);

// 取堆顶的数据
HPDataType HeapTop(Heap* hp);

// 堆的数据个数
int HeapSize(Heap* hp);

// 堆的判空
int HeapEmpty(Heap* hp);

//打印堆，用以测试
void HeapShow(Heap* hp);

// 对数组进行堆排序
void HeapSort(int* a, int n);

void AdjustDowna(HPDataType* a, int parent, int n);