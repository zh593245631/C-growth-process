#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
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

	int_arr(arr,sz);
	
	for(i=0; i<sz; i++)
	{
		printf("%d ",arr[i]);
	}


	return 0;
}