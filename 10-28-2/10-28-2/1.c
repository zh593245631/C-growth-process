#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//v1
 int_arr(int* p,int sz)
{
	int i = 0;
	int* pp = p;
	for(i=0; i<sz; i++)
	{
		if(*pp%2!=0)
		{
			int tmp = *p;
				*p++=*pp;
				*pp=tmp;
		
		}
		pp++;
	}
	for(i=0; i<sz; i++)
	{
		if(*pp%2==0)
		{
			int tmp = *p;
				*p++=*pp;
				*pp=tmp;
		
		}
		pp--;
	}
	

}
//v2 高效算法
 void int_arr1(int a[],int sz)
{
	int left = 0;
	int right = sz-1;

	while(left<right)
	{
		while(left<right&&(a[left]&1))
		{
			left++;
		}
		while(right>left&&!(a[right]&1))
		{
			right--;
		}
		if(left<right)
		{
			a[left]^=a[right];
			a[right]^=a[left];
			a[left]^=a[right];
			left++;
			right--;

		}
	
	}

}
int main()
{
	/*1.调整数组使奇数全部都位于偶数前面。 

题目： 

输入一个整数数组，实现一个函数， 
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分， 
所有偶数位于数组的后半部分。*/
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int i = 0;

	int_arr1(arr,sz);
	
	for(i=0; i<sz; i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n");
	return 0;
}