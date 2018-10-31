#ifndef __GAME_H__
#define __GAME_H__
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#define ROW 10
#define COL 10
#define ROW1 ROW+2
#define COL1 COL+2
#define LEI 15  //可以自定义雷的数目

void init(char show[ROW1][COL1],char clei[ROW1][COL1],int row,int col);
void display(char arr[ROW1][COL1],int row,int col);//打印游戏界面
void _lei(char arr[ROW1][COL1],int row,int col);
int playergo(char show[ROW1][COL1],char clei[ROW1][COL1],int row,int col);
int _swap(char clei[ROW1][COL1],int x,int y);//查看（x,y）周围几个雷
void open(char clei[ROW1][COL1],char show[ROW1][COL1],int x,int y);//展开函数
int getcount(char show[ROW1][COL1],int row,int col); //获取剩余‘*’
void safe_LEI(char clei[ROW1][COL1],int x,int y); //第一次是LEI偷偷移走


#endif __GAME_H__ 

