#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>

int main()
{
	system("pause");
	return 0;
}
//ͷ��
void VectorPushFront(struct Vector * vector, int val)
{
	vector->size++;

	for (int i = verctor->size; i > 0; i--){
		vector->array[i] = vector->array[i - 1];
	}

	vector->array[0] = val;	
}
//������ͷ βɾ
void...()
{
	assert(head);
	cur = head;

	if (cur->next == NULL){
		free(cur);
		head = NULL;
		return;
	}
	while (cur->next->next){
		cur = cur->next;
	}
	free(cur->next);
	cur->next = NULL;
}
//ɾ������
Node* SHAN(Node* head, int val)
{
	Node* cur = head;
	Node* prev = NULL;

	while (cur){
		if (cur->val == val){
			if (cur == head){
				head = cur->next;
			}
			else{
				prev->next = cur->next;
			}
		}
		else{
			prev = cur;
		}
		cur = cur->next;
	}
}
//ð��
void swap(int* a, int* b)
{
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}
..(int* arr, int size)
{
	int i = 0;
	for (i = 0; i < size - 1; i++){
		for (j = 0; j < size -1- i; j++){
			if (arr[j]>arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
	}
}