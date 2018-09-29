#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int Sn = 0;
//	for(a = 0; a<10; a++)
//	{
//		Sn=5*a*1+4*a*10+3*a*100+2*a*1000+1*a*10000;
//		printf("%d\n",Sn);
//	
//	}
//	
//
//	return 0;
//}
// Sn = 1 + 11 + 111 + 1111 + 11111;
int main()
{
	int i = 0;
	int b = 0;  //表示总共b项相加
	int n = 0;	//第一项数值
	int sum = 0; 
	int tmp = 0;

	scanf("%d%d",&n,&b);

	for(i=1; i<=b; i++)

	{
		tmp = tmp*10+n;  //计算每一项，比如 11 = 1*10 +1，111 = 11*10 +1
		sum += n;		// 求和
			
	}
		
	printf("S%d=%d",n,sum);

	return 0;
}