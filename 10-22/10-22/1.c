#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int count_one_bits(unsigned int value) 
{ 
	//15
	//1111
	//0001 ^1110 &0001 | 1111 
	int count = 0;
	int a = value;

	while(a)
	{
		if((a&1)==1)
		count++;
		a>>=1;
	}
	return count;

} 

int main()
{
	int value;

	scanf("%d",&value);

	printf("%d",count_one_bits(value)); 


	return 0;
}