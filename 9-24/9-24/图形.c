#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*char arr1[13]={'*','*','*','*','*','*','*','*','*','*','*','*','*'};*/
	char arr1[13]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};

	int i = 0;

	int j = 0;

	for(i=0; i<13; i++)
	
	{
		 if(i<7)
		 
		 {
			 arr1[6+i]='*';

		     arr1[6-i]='*';

			for(j=0; j<13; j++)
		 
			{
				
				printf("%c",arr1[j]);

			}
		     printf("\n");
		 }
		 else
		 
		 {
			arr1[i-7]=' ';

			arr1[19-i]=' ';// 12-(i-7)

			for(j=0; j<13; j++)
		 
			{
				
				printf("%c",arr1[j]);

			}
			 
			printf("\n");
		 
		 }

	}   

	
	return 0;
}