#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//void menu()
//{
//	printf("#���׼�����####################\n");
//	printf("########1.Add     2.Sub########\n");
//	printf("########3.Mul     4.Div########\n");
//	printf("########0.exit  ###############\n");
//	printf("####��ѡ��>\n");
//}
//int add(int x, int y)
//{
//	return x+y;
//}
//int sub(int x, int y)
//{
//	return x-y;
//}
//int mul(int x, int y)
//{
//	return x*y;
//}
//int div(int x, int y)
//{
//	return x/y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		scanf("%d",&input);
//		switch(input)
//		{
//			case 1:
//				printf("������������������x,y\n");
//				scanf("%d%d",&x,&y);
//				printf("%d\n",add(x,y));
//				break;
//			case 2:
//				printf("������������������x,y\n");
//				scanf("%d%d",&x,&y);
//				printf("%d\n",sub(x,y));
//				break;
//			case 3:
//				printf("������������������x,y\n");
//				scanf("%d%d",&x,&y);
//				printf("%d\n",mul(x,y));
//				break;
//			case 4:
//				printf("������������������x,y\n");
//				scanf("%d%d",&x,&y);
//				printf("%d\n",div(x,y));
//				break;
//			case 0:				
//				printf("�˳�������\n");
//				break;
//			default:
//				printf("�������\n");
//				break;
//		
//		}
//
//	}while(input);
//
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*p[5])(int x,int y) = {0,add,sub,mul,div};//ת�Ʊ�
//	do
//	{
//		menu();
//		scanf("%d",&input);
//		if(input>0&&input<5)
//		{
//			printf("������������������\n");
//			scanf("%d%d",&x,&y);
//			printf("%d\n",(*p[input])(x,y));
//		}
//		else if(input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}while(input);
//
//	return 0;
//}
void print_arr(int *a,int size)
{
	int i = 0;

	printf("[ ");
	for(i = 0; i<size; i++)
	{
		printf("%d ",a[i]);
	}
	printf("]\n");
}
//ð��
//void _swap(int* a, int* b)
//{
//	*a = *a^*b;
//	*b = *a^*b;
//	*a = *a^*b;
//}
//void maopao(int* a, int size)
//{
//	int i = 0;
//	int j = 0;
//	for(i=0; i<size-1; i++)
//	{
//		for(j=0; j<size-1-i; j++)
//		{
//			if(a[j]>a[j+1])
//			{
//				_swap(&a[i],&a[j]);
//
//			}
//		}
//	}
//}
int int_cmp(const void* a,const void* b)
{
	return *((int*)a)>*((int*)b);
}
void _swap(void* p1, void* p2, int size)
{
	char* pp1 = (char*)p1;
	char* pp2 = (char*)p2;
	int i = 0;

	for(i=0; i<size; i++)
	{
		pp1[i]=pp1[i]^pp2[i];
		pp2[i]=pp1[i]^pp2[i];
		pp1[i]=pp1[i]^pp2[i];

	}

	
}
void my_qsort(void* base, int count, int size,int(*cmp)(const void*,const void*))
{
	int i = 0;
	int j = 0;
	char* p = (char*)base;
	for(i=0; i<count-i; i++)
	{
		for(j=0; j<count-1-i;j++)
		{
			if(cmp(&p[j*size],&p[(j+1)*size])>0)
			{
				_swap(&p[j*size],&p[(j+1)*size],size);
			}
		}
	}
}
int main()
{
	int a[10] = {1,3,5,7,9,2,4,6,8,0};
	int size = sizeof(a)/sizeof(a[0]);

	print_arr(a,size);
	my_qsort(a,size,sizeof(int),int_cmp);
	print_arr(a,size);
	return 0;
}
