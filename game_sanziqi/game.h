#pragma once
#define ROW 3
#define COL 3

#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>


//初始化棋盘
void InitBoard(char board[ROW][COL] ,int row,int col);

//打印棋盘
void PrintBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayBoard(char board[ROW][COL], int row, int col);

//电脑下棋
void MPlayBoard(char board[ROW][COL] , int row , int col);

//判断输赢
int WinBoard(char board[ROW][COL], int row, int col);