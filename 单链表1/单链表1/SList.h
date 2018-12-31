#pragma once
#include<stdio.h>

typedef int SLTDataType; 

typedef struct SListNode 
{ 
	SLTDataType data;    
	struct SListNode* next; 
}SListNode;

typedef struct SList 
{
	SListNode* head; 
}SList;

void SListInit(SList* plist);
void SListDestory(SList* plist);

SListNode* BuySListNode(SLTDataType x); 
void SListPushFront(SList* plist, SLTDataType x);
void SListPopFront(SList* plist); 
void SListPopBack(SList *list);
void SListPushBack(SList *list, SLTDataType x);
SListNode* SListFind(SList* plist, SLTDataType x); 
// 在pos的后面进行插入 
void SListInsertAfter(SListNode* pos, SLTDataType x); 
// 在pos的后面进行删除 
void SListEraseAfter(SListNode* pos); 
void SListRemove(SList* plist, SLTDataType x);

void SListPrint(SList* plist); 