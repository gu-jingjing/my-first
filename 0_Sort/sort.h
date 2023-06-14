#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


//打印
void PrintArray(int* a, int n);

//插入排序
//假设是升序
void InsertSort(int* a, int n);

//希尔排序
void ShellSort(int* a, int n);
void ShellSort2(int* a, int n);

//选择排序
void SelectSort(int* a, int n);



//快速排序
void QuickSort(int* a, int left, int right);