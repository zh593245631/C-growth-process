#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void init(int *p, int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		*p=0;
		p++;
	
	}
}
void empty(int *p, int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		*p='\0';
		p++;
	
	}
}
//void reverse(int *p, int sz)
//{
//	int i = 0;
//	for(i=0; i<sz/2; i++)
//	{
//		int tmp = *p;
//			
//
//			
//	
//	}
//}
int main()
{
	int arr[3][3]={{1,2,3},{1,2,3},{1,2,3}};
	int sz = 0;

	sz = sizeof(arr)/sizeof(arr[0][0]);

	init(&arr[0][0],sz);
	empty(&arr[0][0],sz);
	/*reverse(&arr[0][0],sz);*/

	return 0;
}