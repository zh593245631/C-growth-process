#ifndef __GAME_H__
#define __GAME_H__
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 10
#define COL 10
#define ROW1 ROW+2
#define COL1 COL+2
#define LEI 10

void init(char show[ROW1][COL1],char clei[ROW1][COL1],int row,int col);
void display(char arr[ROW1][COL1],int row,int col);
void _lei(char arr[ROW1][COL1],int row,int col);
int playergo(char show[ROW1][COL1],char clei[ROW1][COL1],int row,int col);
int _swap(char clei[ROW1][COL1],int x,int y);








#endif __GAME_H__ 

