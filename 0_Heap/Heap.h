#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>;

typedef int HPDataType;

typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;

void HeapPrint(HP* hp);

void HeapInit(HP* hp);
void HeapDestroy(HP* hp);

void HeapPush(HP* hp, HPDataType x);
void HeapPop(HP* hp);

bool HeapEmpty(HP* hp);

int HeapSize(HP* hp);

void HeapSort(int* a, int n);