#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr1[]={33,44,55,66,77,88};
	int arr2[]={333,444,555,666,777,888};
	int sz = sizeof(arr1)/sizeof(arr1[0]); //数组元素个数
	int i = 0;

	//for(i=0; i<6; i++)  改变代码通用性
	for(i=0; i<sz; i++)  
		
	{
			int t = 0;
			t = arr1[i];
			arr1[i]=arr2[i];
			arr2[i]=t;
		
	}

	      printf("arr1: ");

	for(i=0; i<sz; i++)

	{
		  printf("%d ",arr1[i]);
	}

	      printf("\narr2: ");
	
	for(i=0; i<sz; i++)

	{
		  printf("%d ",arr2[i]);
	}

	      printf("\n");

	
	return 0;
}