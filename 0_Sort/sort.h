#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


//��ӡ
void PrintArray(int* a, int n);

//��������
//����������
void InsertSort(int* a, int n);

//ϣ������
void ShellSort(int* a, int n);
void ShellSort2(int* a, int n);

//ѡ������
void SelectSort(int* a, int n);



//��������
void QuickSort(int* a, int left, int right);