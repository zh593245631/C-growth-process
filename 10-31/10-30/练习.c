#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	// \ddd 1~3个8进制数， \xddd 16进制数；
//	
//	printf("\40");	//32  ' '
//	printf("\100");	//64  '@'
//	printf("\x40");	//64  '@'
//	printf("\x100");//256  越界 error C2022: “256”: 对字符来说太大
//	printf("\0123");// 两个字符 '\012' '3' 
//	printf("\x0123");//291 越界 error C2022: “291”: 对字符来说太大
//	return 0;
//}
//
//
//int main()
//{
//	int Case,If,While,Stop,stop;
//	return 0;
//}
//
//
//int main()
//{
//	int x,y;
//		
//		x = 0;
//	while(x<10)
//	{
//		y = x*x;
//		printf("%d\t%d\n",x,y);
//		x += 1;
//	}
//
//	return 0;
//}
//
//
//int increment(int num);
//int negate(int num);
//int main()
//{
//	printf("increment(10)=%d\nincrement(0)=%d\nincrement(-10)=%d\n",increment(10),increment(0),increment(-10));
//	printf("negate(10)=%d\nnegate(0)=%d\nnegate(-10)=%d\n",negate(10),negate(0),negate(-10));
//		return 0;
//}
//
//
int main()
{
	int ch = 0;
	int count = 0;

	while((ch=getchar())!=EOF)
	{
		if(ch=='{')
			count++;
		if(ch=='}')
		{
			if(count==0)
			{
				printf("此‘}’不合法\n");
			}
			else
				count--;
		}
	
	}
	if(count>0)
		printf("'{','}'不是成对出现的，%d个'{'找不到匹配的‘}’\n",count);

	return 0;
}