#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>

int main()
{
	system("pause");
	return 0;
}
//���ϵ���
//
void ppp(int arr, int size)
{
	if (arr[((size - 1) / 2)] <= arr[size - 1])
		return;
	else{
		ppp(arr, (size - 1) / 2 + 1);
	}
}	
//���µ���
void AdjustDown(int arr[], int size, int root)
{
	//�жϵ�ǰ�ڵ��Ƿ�ΪҶ�ӽڵ�
	int left = root * 2 + 1;
	if (root*2+1>=size)
		return;

	int mid = left;
	if (arr[right] < arr[mid]){
		mid = right;
	}

	if (arr[root] < arr[mid])
		return;
	else{
		swap(&arr[root], &arr[mid]);
		mid = root;
	}

}