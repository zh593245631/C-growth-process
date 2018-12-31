#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"
#include<windows.h>
void test(){
	SList slist;
	
	SListInit(&slist);
	SListPushFront(&slist, 1);
	SListPushFront(&slist, 2);
	SListPushFront(&slist, 3);
	SListPushFront(&slist, 4);
	SListPrint(&slist);

	SListPopFront(&slist);
	SListPopFront(&slist);
	SListPrint(&slist);

    SListFind(&slist, 2);

	SListPopBack(&slist);
	SListPopBack(&slist);
	SListPrint(&slist);


	//SListPushBack(&slist, 5);
	SListPushBack(&slist, 6);
	SListPushBack(&slist, 7);
	SListPushBack(&slist, 8);

	SListPrint(&slist);


	//SListDestory(&slist);
	//SListPrint(&slist);
}
int main()
{
	test();
	system("pause");
	return 0;
}