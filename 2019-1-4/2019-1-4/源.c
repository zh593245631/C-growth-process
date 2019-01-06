#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>

int main()
{
	system("pause");
	return 0;
}
//向上调整
//
void ppp(int arr, int size)
{
	if (arr[((size - 1) / 2)] <= arr[size - 1])
		return;
	else{
		ppp(arr, (size - 1) / 2 + 1);
	}
}	
//向下调整
void AdjustDown(int arr[], int size, int root)
{
	//判断当前节点是否为叶子节点
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