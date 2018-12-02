#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//v1
//1 2 3
// 9
//1+1
//void diff_num(int *arr,int sz)
//{
//	int i = 0;
//	int j = 0;
//	assert(arr&&sz>0);
//	for(i=0;i<sz;i++)
//	{
//		int flat = 0;
//		for(j=0;j<sz;j++)
//		{
//			if(!(arr[i]^arr[j])&&(i!=j))
//			{
//				flat = 1;
//				break;
//			}
//
//		}
//		if(flat==0)
//		{
//			printf("%d ",arr[i]);
//		}
//	}
//}
//void diff_num1(int *arr,int sz)
//{
//	int i = 1;
//	int x = arr[0];
//	int flat = 1;
//	assert(arr&&sz>0);
//
//	for(i=1; i<sz; i++)
//	{
//		x^=arr[i];
//	}
//	
//	
//}
//int main()
//{
//	int arr[]={1,2,3,1,2,3,3,3,4,5};
//	
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	
//	diff_num(arr,sz);
//	return 0;
//}
//
//
//int drink_co2(int ping)
//{
//	if(ping>1)
//		return drink_co2(ping/2)+ping+ping%2;
//	return ping;
//}
//int main()
//{
//	int pic = 1;
//	int money = 21;
//	int ping = money/pic;
//
//	int can_drink = drink_co2(ping);
//
//	printf("drink %d ping\n",can_drink);
//	return 0;
//}


//void my_strcpy(char* dst,const char * src)
//{
//	char * src1 = src;
//	while(*src1)
//	{
//		*dst++ = *src1++;
//		if(!*src1)
//		{
//			*dst = *src1;
//		}
//	}
//}
//int main()
//{
//	char a[] = "adadsad";
//	char b[]="1515";
//	my_strcpy(b,a);
//	return 0;
//}
//void my_strcat(char* dst,const char *src)
//{
//	assert(dst&&src);
//	while(*dst)
//	{
//		dst++;
//	}
//	while(*src)
//	{
//		*dst++ = *src++;
//	}
//	*dst = '\0';
//		
//}
//int main()
//{
//	char a[100] = "abcdefgh";
//	char b[3] = "A";
//
//	my_strcat(b,a);
//	printf("%s\n",b);
//	return 0;
//}
