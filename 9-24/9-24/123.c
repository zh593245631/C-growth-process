#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int Sn = 0;
	for(a = 0; a<10; a++)
	{
		Sn=5*a*1+4*a*10+3*a*100+2*a*1000+1*a*10000;
		printf("%d\n",Sn);
	
	}
	

	return 0;
}