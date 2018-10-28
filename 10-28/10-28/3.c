#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,5,4,3,2,1,6,7};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int i = 0;
	for(i=1; i<sz; i++)
	{
		arr[i]^=arr[i-1];
	}
	printf("不同的是：%d\n",arr[sz-1]);
	return 0;
}