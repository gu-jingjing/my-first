#pragma once
//���ŵĶ���
#define ROW 3
#define COL 3

//ͷ�ļ��İ���
#include<stdlib.h>
#include<time.h>
#include<stdio.h>

//����������

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL],int row,int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
char IsWin(char board[ROW][COL], int row, int col);