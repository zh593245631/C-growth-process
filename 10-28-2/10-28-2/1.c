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
//v2 ��Ч�㷨
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
	/*1.��������ʹ����ȫ����λ��ż��ǰ�档 

��Ŀ�� 

����һ���������飬ʵ��һ�������� 
�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣� 
����ż��λ������ĺ�벿�֡�*/
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