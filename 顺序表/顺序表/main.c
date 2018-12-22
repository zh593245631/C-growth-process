#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
#include<Windows.h>
void test1()
{
	SeqList seqlist;
	SeqListInit(&seqlist,5);
	SeqListPushBack(&seqlist, 10);
	SeqListPushBack(&seqlist, 10);
	SeqListPushBack(&seqlist, 10);
	//SeqListPushBack(&seqlist, 10);
	//SeqListPushBack(&seqlist, 10);
	//SeqListPopBack(&seqlist);
	//SeqListPopBack(&seqlist);
	//SeqListPopBack(&seqlist);
	//SeqListPopBack(&seqlist);
	//SeqListPopBack(&seqlist);
	//SeqListPushFront(&seqlist, 1);
	//SeqListPushFront(&seqlist, 2);
	//SeqListPushFront(&seqlist, 3);
	//SeqListPushFront(&seqlist, 4);
	//SeqListPopFront(&seqlist);
	//SeqListPopFront(&seqlist);
	//SeqListPopFront(&seqlist);
	//SeqListPopFront(&seqlist);
	SeqListInsert(&seqlist, 1, 9);
	SeqListInsert(&seqlist, 1, 8);
	SeqListInsert(&seqlist, 1, 8);
	SeqListModify(&seqlist,1,11);
	SeqListFind(&seqlist, 8);
	SeqListRemove(&seqlist, 8);
	//SeqListErase(&seqlist, 1);
	//SeqListErase(&seqlist, 1);
	SeqListBubbleSort(&seqlist);
	SeqListRemoveAll(&seqlist, 10);
	SeqListPrint(&seqlist);
	int a = SeqListBinaryFind(&seqlist,10);
	printf("%d ", a);




	//seqlist.array = NULL;
	SeqListDestroy(&seqlist);

}
int main()
{
	test1();
	system("pause");
	return 0;
}