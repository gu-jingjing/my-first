#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MAX_COUNT 15

//��ʼ��
void InitBoard(char board[ROWS][COLS], int row , int col,char c);

//��ӡ
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//������
void MakeBoard(char board[ROWS][COLS], int row, int col);

//�Ų���
int FindBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);