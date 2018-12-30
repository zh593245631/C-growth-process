#include "SList.h"

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

	node->_data = x;
	node->next = NULL;

	return node;
}
//Í·²å
void SListPushFront(SList* plist, SLTDataType x)
{
	assert(plist);

	SListNode* node = BuySListNode(x);
	node->next = plist->head;
	plist->head = node;
}
//Í·É¾
void SListPopFront(SList* plist)
{
	assert(plist);

	SListNode* node = plist->head;
	plist->head = plist->head->next;
	free(node);
}
