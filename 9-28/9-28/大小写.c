#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char zifu = '0';
	int  ascii = 0 ;
	
	while(1)
	{
		zifu =getchar();
		ascii = zifu;
		if(ascii >= 65 && ascii <= 89)
		{
			zifu = ascii+32;
			printf("%c\n",zifu);
		}
		else if(ascii >= 97 && ascii <= 122)
		{
			zifu = ascii-32;
			printf("%c\n",zifu);
		}
		else if(zifu = 'EOF')
				break;

	}
			

	return 0;
}