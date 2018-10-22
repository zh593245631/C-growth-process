#ifndef __GAME__H__
#define __GAME__H__
#include<stdio.h>
#include<time.h>
#define ROW 3
#define COL 3

void init(char arr[ROW][COL],int row,int col);
void display(char arr[ROW][COL],int row,int col);
void playergo(char arr[ROW][COL],int row,int col);
void computergo(char arr[ROW][COL],int row,int col);
char is_win(char arr[ROW][COL],int row,int col);


#endif __GAME__H__