#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	// \ddd 1~3��8�������� \xddd 16��������
//	
//	printf("\40");	//32  ' '
//	printf("\100");	//64  '@'
//	printf("\x40");	//64  '@'
//	printf("\x100");//256  Խ�� error C2022: ��256��: ���ַ���˵̫��
//	printf("\0123");// �����ַ� '\012' '3' 
//	printf("\x0123");//291 Խ�� error C2022: ��291��: ���ַ���˵̫��
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
				printf("�ˡ�}�����Ϸ�\n");
			}
			else
				count--;
		}
	
	}
	if(count>0)
		printf("'{','}'���ǳɶԳ��ֵģ�%d��'{'�Ҳ���ƥ��ġ�}��\n",count);

	return 0;
}