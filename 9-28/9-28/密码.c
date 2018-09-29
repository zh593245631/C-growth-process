#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	

	for(i = 1; i <= 3; i++)
	{
		char arr[]="0";
		scanf("%s",arr);

		if(strcmp(arr,"zxc123...") == 1)
		{
			printf("ÃÜÂëÕýÈ·\n");
			break;	
		}
		else
			printf("ÃÜÂë´íÎó£¬ÇëÖØÐÂÊäÈë\n");
	
	}
	return 0;
}