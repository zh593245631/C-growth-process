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
#define LEI 15  //�����Զ����׵���Ŀ

void init(char show[ROW1][COL1],char clei[ROW1][COL1],int row,int col);
void display(char arr[ROW1][COL1],int row,int col);//��ӡ��Ϸ����
void _lei(char arr[ROW1][COL1],int row,int col);
int playergo(char show[ROW1][COL1],char clei[ROW1][COL1],int row,int col);
int _swap(char clei[ROW1][COL1],int x,int y);//�鿴��x,y����Χ������
void open(char clei[ROW1][COL1],char show[ROW1][COL1],int x,int y);//չ������
int getcount(char show[ROW1][COL1],int row,int col); //��ȡʣ�࡮*��
void safe_LEI(char clei[ROW1][COL1],int x,int y); //��һ����LEI͵͵����


#endif __GAME_H__ 

