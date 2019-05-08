#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


//����������
#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//
//���Ӯ-*
//����Ӯ-#
//ƽ��---Q
//����---C
//
//�ж���Ϸ��Ӯ��
char CheckWin(char board[ROW][COL], int row, int col);