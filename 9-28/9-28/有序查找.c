#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int zheban_num(int arr[],int num,int left,int right)
{
	while(right >left)
		{
			int mid = right + (left-right)/2;
			if(num > arr[mid])
				left = mid;
			else if(num < arr[mid])
				right = mid;
			else
			{
				return mid;
			}
		}
			return -1;
}
int main()
{
	int arr[]={0,1,2,3,4,5,6,7,8,9};

	int num = 7;

	int left = 0;

	int right = sizeof(arr)/sizeof(arr[0]);

	int flat = zheban_num(arr,num,left,right);
	if(flat == -1)
		printf("没找到\n");
	else
		printf("找到了：%d",flat);
		
	
	
	return 0;
}