#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void _swap(char a[],int i,int j)
{
	char tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;

}
void _pailie(char a[],int l,int r)
{
	int i = 0;
	int j = 0;
	

	if(l==r)
	{
		
		if((a[0]=='B'||a[2]=='A')&&(a[1]=='B'||a[3]=='E')&&(a[0]=='C'||a[1]=='D')&&(a[2]=='D'||a[4]=='C')&&(a[0]=='A'||a[3]=='E'))
		{
			printf("���ǵ������ǣ�");
			for(i=0; i<=r; i++)
			{
			
				printf("%c ",a[i]);
			}
			printf("\n");
		}
			

	}
	else
	{
		for(j=l; j<=r; j++)
		{
			_swap(a,l,j);
			_pailie(a,l+1,r);
			_swap(a,l,j);
		}
	}

}
int main()
{
	//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ�������� 
	//Aѡ��˵��B�ڶ����ҵ����� b2 a3  
	//Bѡ��˵���ҵڶ���E���ģ� b2 e4  
	//Cѡ��˵���ҵ�һ��D�ڶ��� c1 d2
	//Dѡ��˵��C����ҵ����� c5 d3	
	//Eѡ��˵���ҵ��ģ�A��һ�� e4 a1	
	//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
	char a[5] ="ABCDE";
	_pailie(a,0,4);

	
	return 0;
}