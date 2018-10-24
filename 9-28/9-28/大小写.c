#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;

	while((a=getchar())!='EOF')
	{
		if(a>='A'&&a<='Z')
		{
			putchar(a+32);
		}
		else if(a>='a'&& a<='z')
		{
			putchar(a-32);

		}
		else if(a>='0'&&a<='9')
		{
			;
		}
		else
		{
			putchar(a);
		}
	
	}
	return 0;
}
//int main()
//{
//	char zifu = '0';
//	int  ascii = 0 ;
//	
//	while(1)
//	{
//		zifu =getchar();
//		ascii = zifu;
//		if(ascii >= 65 && ascii <= 89)
//		{
//			zifu = ascii+32;
//			printf("%c\n",zifu);
//		}
//		else if(ascii >= 97 && ascii <= 122)
//		{
//			zifu = ascii-32;
//			printf("%c\n",zifu);
//		}
//		else if(zifu = 'EOF')
//				break;
//
//	}
//			
//
//	return 0;
//}