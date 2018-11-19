#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void diff_num(int *arr,int sz)
{
	int i = 0;
	int j = 0;

	for(i=0;i<sz;i++)
	{
		int flat = 0;
		for(j=0;j<sz;j++)
		{
			if(!(arr[i]^arr[j])&&(i!=j))
			{
				flat = 1;
				break;
			}

		}
		if(flat==0)
		{
			printf("%d ",arr[i]);
		}
	}
}
int main()
{
	int arr[]={1,2,3,1,2,3,4,5};
	
	int sz = sizeof(arr)/sizeof(arr[0]);
	
	diff_num(arr,sz);
	return 0;
}


int drink_co2(int ping)
{
	if(ping>=2)
		return drink_co2(ping/2)+ping;
	return ping;
}
int main()
{
	int pic = 1;
	int money = 4;
	int ping = money/pic;

	int can_drink = drink_co2(ping);

	printf("drink %d ping\n",can_drink);
	return 0;
}


void my_strcpy(char* dst,const char * src)
{
	char * src1 = src;
	while(*src1)
	{
		*dst++ = *src1++;
		if(!*src1)
		{
			*dst = *src1;
		}
	}
}
int main()
{
	char a[] = "adadsad";
	char b[]="1515";
	my_strcpy(b,a);
	return 0;
}
void my_strcat(char* dst,const char *src)
{
	char *src1 = src;
	while(*dst++)
	{
		if(!(*dst))
		{
			while(*(src1-1))
			{
				*dst++ = *src1++;
			}
			break;
		}
	}
}
int main()
{
	char a[100] = "abcdefgh";
	char b[100] = "A";

	my_strcat(b,a);
	return 0;
}
