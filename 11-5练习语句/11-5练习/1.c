#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1;
	{
		a = 5;
	}
	printf("%d\n",a);
	for(a = 0; a<10; a+=1)
	{
		printf("%d\n",a);
	}
	return 0;
}


int main()
{
	int a = 0;
	int i = 0;
	
	scanf("%d",&a);

	printf("------------------------------\n");
	for(i=0; i<a; i++)
	{
		printf("\n");
	}
	printf("------------------------------\n");
	while(a--)
	{
		printf("\n");
	}

	return 0;
}


int main()
{
	int x = 3;
	int y = 3;
	int a = 5;
	int b = 5;
	
	if(x<y||a>=b)
		printf("WRONG\n");
	else
		printf("RIGHT\n");

	return 0;
}


int leap_year(int year)
{
	return (year%400==0)||((year%4==0)&&(year%100!=0));
}
int main()
{
	int year = 2000;
	year = leap_year(year);
	printf("%d\n",year); // 1 Ϊ���� 0����
	return 0;
}


int main()
{
	int which_word = 0;
	scanf("%d",&which_word);

	switch(which_word)
	{
		case(1):
			printf("who\n");
			break;
		case(2):
			printf("what\n");
			break;
		case(3):
			printf("when\n");
			break;
		case(4):
			printf("where\n");
			break;
		case(5):
			printf("why\n");
			break;
		default:
			printf("don't know\n");
			break;
	}
	return 0;
}


int count = 0;
int eat_hamberger()
{
	return ++count;
}
int hungry()
{
	return 5-count; //��10���ͱ���
}
int main()
{
	int want_eat = 0;

	while(hungry())
	{
		printf("\t\t\thumberger �Բ��ԣ���1.�ԣ�0.�����ˣ�\n",count);
		scanf("%d",&want_eat);//0 Ϊ�������
		if(want_eat==0)
		{
			printf("\t\t\t�Ҳ�����ˣ����Ѿ�����%d��hamberger��\n",count);
			return 0;
		}
		else
		{
			eat_hamberger();
			printf("\t\t\t���Ѿ�����%d��hamberger\n",count);
		}
	}
	printf("\t\t\t�ҳԱ���\n");
	return 0;
}


int main()
{
	int want_eat = 0;

	do
	{
		eat_hamberger();
		printf("\t\t\t���Ѿ�����%d��hamberger\n",count);
		if(hungry()==0)
			break;
		printf("\t\t\thumberger �Բ��ԣ���1.�ԣ�0.�����ˣ�\n",count);
		scanf("%d",&want_eat);//0 Ϊ�������
		if(want_eat==0)
		{
			printf("\t\t\t�Ҳ�����ˣ����Ѿ�����%d��hamberger��\n",count);
			return 0;
		}

	}while(hungry());
	
	printf("\t\t\t�ҳԱ���\n");
	return 0;
}


int main()
{
	int precipitating = 0;
	int temperature = 0;
	scanf("%d",&precipitating);
	scanf("%d",&temperature);

	if(precipitating==0)
	{
		if(temperature<60)
			printf("cold\n");
		else
			printf("warm\n");
	}
	else
	{
		if(temperature<32)
			printf("snowing\n");
		else
			printf("raining\n");
	}
	
	
	return 0;
}

#include<stdlib.h>
int main()
{
	// ����һ������ƽ����
	float number;
	float new_num;
	float last_num;
PFG:
	printf("������һ���Ǹ���������ƽ����\n");
	scanf("%f",&number);

	if(number<0)
	{
		printf("����û��ƽ����\n");
		goto PFG;
	}
	new_num = 1;
	do
	{
		last_num = new_num;
		new_num = (last_num +number/last_num)/2;
		printf("%0.10f\n",new_num);
	}while(new_num!=last_num);

	printf("%f��ƽ������%f\n",number,new_num);


	return 0;
}


#include<math.h>
int main()
{
	int i = 0;

	for(i = 1; i<=100; i++)
	{
		int j = 0;
		for(j=2; j<=sqrt(i); j++)
		{
			if(i%j==0)break;
		}
		if(j>sqrt(i))
			printf("%d ",i);
	}
	return 0;
}


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
SJX:
	printf("����������������\n");
	scanf("%d%d%d",&a,&b,&c);

	if(a<0||b<0||c<0||a+b<=c||a+c<=b||b+c<=a)
	{
		printf("���ܹ���������\n");
		goto SJX;
	}
	else
	{
		if(a==b&&b==c)
			printf("�ȱ�������\n");
		else if((a==b)+(a==c)+(b==c)==1)
			printf("����������\n");
		else
			printf("���ȱ�������\n");
	}
	return 0;
}








