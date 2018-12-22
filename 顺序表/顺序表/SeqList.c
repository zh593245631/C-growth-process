#include "SeqList.h"
#include <assert.h>
#include <stdlib.h>
//À©ÈÝ
static void CheckCapacity(SeqList *seqlist)
{
	assert(seqlist);
	assert(seqlist->size <= seqlist->capacity);

	if (seqlist->size < seqlist->capacity)return;

	int capacity = 2 * seqlist->capacity;
	SDataType* array = (SDataType*)malloc(sizeof(SDataType) * capacity);
	assert(array);
	seqlist->capacity = capacity;

	for (int i = 0; i < seqlist->size; i++){
		array[i] = seqlist->array[i];
	}

	free(seqlist->array);
	seqlist->array = array;
}
void SeqListInit(SeqList *seqlist, int capacity)
{
	assert(seqlist);

	seqlist->array = (SDataType*)malloc(sizeof(SDataType)*capacity);
	assert(seqlist->array);

	seqlist->size = 0;
	seqlist->capacity = capacity;
}
void SeqListDestroy(SeqList *seqlist)
{
	assert(seqlist);

	free(seqlist->array);

	seqlist->array = NULL;
	seqlist->size = 0; 
	seqlist->capacity = 0;
}
void SeqListPushBack(SeqList *seqlist, SDataType value)
{
	assert(seqlist);
	
	CheckCapacity(seqlist);
	
	seqlist->array[seqlist->size++] = value;

}
void SeqListPopBack(SeqList *seqlist)
{
	assert(seqlist);
	assert(seqlist->array);
	assert(seqlist->size > 0);

	seqlist->size--;
}
void SeqListPushFront(SeqList *seqlist, SDataType value)
{
	assert(seqlist);

	CheckCapacity(seqlist);

	for (int i = seqlist->size; i>0; i--){
		seqlist->array[i] = seqlist->array[i - 1];
	}

	seqlist->array[0] = value;
	seqlist->size++;
}
void SeqListPopFront(SeqList *seqlist)
{
	assert(seqlist);

	for (int i = 0; i < seqlist->size - 1; i++){
		seqlist->array[i] = seqlist->array[i + 1];
	}

	seqlist->size--;
}
void SeqListInsert(SeqList *seqlist, int pos, SDataType value)
{
	assert(seqlist);

	CheckCapacity(seqlist);

	for (int i = seqlist->size; i>pos; i--){
		seqlist->array[i] = seqlist->array[i - 1];
	}

	seqlist->array[pos] = value;
	seqlist->size++;
}
void SeqListErase(SeqList *seqlist, int pos)
{
	assert(seqlist);

	for (int i = pos; i < seqlist->size - 1; i++){
		seqlist->array[i] = seqlist->array[i + 1];
	}

	seqlist->size--;
}
void SeqListPrint(const SeqList *seqlist)
{
	assert(seqlist);

	for (int i = 0; i < seqlist->size; i++){
		printf("%d ", seqlist->array[i]);
	}
	printf("\n");
}
void SeqListModify(SeqList *seqlist, int pos, SDataType value)
{
	assert(seqlist);
	assert(pos >= 0 && pos < seqlist->size);

	seqlist->array[pos] = value;
}
int SeqListFind(const SeqList *seqlist, SDataType value)
{
	assert(seqlist);

	for (int i = 0; i < seqlist->size; i++){
		if (seqlist->array[i] == value)
			return i;
	}
	return -1;
}
void SeqListRemove(SeqList *seqlist, SDataType value)
{
	assert(seqlist);

	int pos = SeqListFind(seqlist, value);

	if (pos != -1){
		SeqListErase(seqlist,pos);
	}
}
bool SeqListEmpty(const SeqList *seqlist)
{
	assert(seqlist);

	return seqlist->size == 0;
}
int SeqListSize(const SeqList *seqlist)
{
	assert(seqlist);

	return seqlist->size;
}
static swap(int*a, int*b)
{
	assert(a&&b);

	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;

}
void SeqListBubbleSort(SeqList *seqlist)
{
	assert(seqlist);
	
	//0 1 2 3 4 5 6 7 8 9
	for (int i = 0; i < seqlist->size-1; i++)
	{
		int ret = 1;
		for (int j = 0; j < seqlist->size - 1 - i; j++)
		{
			if (seqlist->array[j]>seqlist->array[j + 1]){
				swap(&seqlist->array[j], &seqlist->array[j + 1]);
				ret = 0;
			}
		}
		if (ret == 1)break;
	}
}
int SeqListBinaryFind(SeqList *seqlist, SDataType value)
{
	assert(seqlist);

	int left = 0;
	int right = seqlist->size;

	while (left < right){
		int mid = (right - left) / 2 + left;
		if (value == seqlist->array[mid])
			return mid;
		else if (value > seqlist->array[mid])
			left = mid + 1;
		else
			right = mid;
	}

	return -1;
}
void SeqListRemoveAll(SeqList *seqlist, SDataType value)
{
	assert(seqlist);

	int idex = 0;
	for (int i = 0; i < seqlist->size; i++){
		seqlist->array[idex] = seqlist->array[i];
		if (seqlist->array[idex] != value)
			idex++;
	}
	seqlist->size = idex;
}