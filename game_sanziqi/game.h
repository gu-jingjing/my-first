#pragma once
#define ROW 3
#define COL 3

#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>


//��ʼ������
void InitBoard(char board[ROW][COL] ,int row,int col);

//��ӡ����
void PrintBoard(char board[ROW][COL], int row, int col);

//�������
void PlayBoard(char board[ROW][COL], int row, int col);

//��������
void MPlayBoard(char board[ROW][COL] , int row , int col);

//�ж���Ӯ
int WinBoard(char board[ROW][COL], int row, int col);