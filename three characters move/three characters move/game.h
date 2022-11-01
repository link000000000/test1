#pragma once
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col);

void DisplayBoard(char board[ROW][COL], int row, int col);

void PlayerMove(char board[][COL], int row, int col);

void ComputerMove(char board[][COL], int row, int col);

char IsWin(char board[ROW][COL], int row, int col);
