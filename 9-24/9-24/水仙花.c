#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int gw=0;
	int sw=0;
	int bw=0;
	printf("Ë®ÏÉ»¨Êý£º");
	for(i=100; i<=999; i++)
	{
		gw=i%10;
		sw=i/10%10;
		bw=i/100;
		if(i==(gw*gw*gw+sw*sw*sw+bw*bw*bw))
			printf("%d ",i);
	}

}

