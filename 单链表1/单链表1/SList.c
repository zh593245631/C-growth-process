#include "SList.h"
#include<assert.h>
#include<stdlib.h>
void SListInit(SList* plist)
{
	assert(plist);
	plist->head = NULL;
}
void SListDestory(SList* plist)
{
	assert(plist);
	
	SListNode* cur = plist->head;
	SListNode* next;

	while (cur){
		next = cur->next;
		free(cur);
		cur = next;
	}
	plist->head = NULL;
}
SListNode* BuySListNode(SLTDataType x)
{
	SListNode* node = (SListNode*)malloc(sizeof(SListNode));

	assert(node);

	node->data = x;
	node->next = NULL;

	return node;
}
//int SListDestory(SList* plist);

//头插
void SListPushFront(SList* plist, SLTDataType x)
{
	assert(plist);

	SListNode* node = BuySListNode(x);
	node->next = plist->head;
	plist->head = node;
}
//头删
void SListPopFront(SList* plist)
{
	assert(plist);

	SListNode* node = plist->head;
	plist->head = plist->head->next;
	free(node);
}
//查找
SListNode* SListFind(SList* plist, SLTDataType x)
{
	SListNode* node = plist->head;

	while (node){
		if (node->data == x)
			return node;
		node = node->next;
	}

	return NULL;
}
//在pos后插入
void SListInsertAfter(SListNode* pos, SLTDataType x)
{
	assert(pos);

	SListNode* node = BuySListNode(x);

	node->next = pos->next;
	pos->next = node;

}
//在pos后删除
void SListEraseAfter(SListNode* pos)
{
	assert(pos);

	SListNode* old_pos = pos->next;
	pos->next = pos->next->next;

	free(old_pos);
}
//尾删
void SListPopBack(SList *list)
{
	assert(list);

	SListNode* node = list->head;

	if (node == NULL)
		return;
	if (node->next == NULL){
		list->head = NULL;
		return;
	}

	while (node->next->next){
		node = node->next;
	}
	
	free(node->next);
	node->next = NULL;

}
//尾插
void SListPushBack(SList *list, SLTDataType x)
{
	assert(list);

	SListNode* node = BuySListNode(x);
	SListNode* cur = list->head;
	
	if (cur == NULL){
		SListPushFront(list, x);
		return;
	}
	
	while (cur->next){
		cur = cur->next;
	}
		cur->next = node;

}
void SListRemove(SList* plist, SLTDataType x)
{
	assert(plist);

	SListNode* node = plist->head;
	SListNode* cur = NULL;

	while (node){
		if (node->data == x){
			if (node == plist->head){
				plist->head = node->next;
			}
			else{
				cur->next = node->next;
			}
		}
		else{
			cur = node;
		}
		node = node->next;
	}
}

//打印
void SListPrint(SList* plist)
{
	assert(plist);

	SListNode* node = plist->head;
	while (node){
		printf("%d-->", node->data);
		node = node->next;
	}
	printf("NULL\n");
}