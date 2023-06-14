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

// �ѵĹ���
void HeapCreate(Heap* hp, HPDataType* a, int n);

// �ѵ�����
void HeapDestory(Heap* hp);

// �ѵĲ���
void HeapPush(Heap* hp, HPDataType x);

// �ѵ�ɾ��
void HeapPop(Heap* hp);

// ȡ�Ѷ�������
HPDataType HeapTop(Heap* hp);

// �ѵ����ݸ���
int HeapSize(Heap* hp);

// �ѵ��п�
int HeapEmpty(Heap* hp);

//��ӡ�ѣ����Բ���
void HeapShow(Heap* hp);

// ��������ж�����
void HeapSort(int* a, int n);

void AdjustDowna(HPDataType* a, int parent, int n);