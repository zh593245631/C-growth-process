//#include<stdio.h>
//int main()
//{
//	int arr[3]={40,35,100};
//	int i=0;
//	int j=0;
//	for(i=0;i<3;i++)
//	{
//		for(j=i+1;j<3;j++)
//		{
//			if(arr[j]>arr[i])
//			{	
//				int t=0;
//				t=arr[j];
//				arr[j]=arr[i];
//				arr[i]=t;
//		    }
//				
//		}
//	}
//    for(i=0;i<3;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	
//
//	return 0;
//}
//不用数组：
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	if(b>a)
//	{
//		a=a^b;
//		b=a^b;
//		a=a^b;
//	}
//	if(c>a)
//	{
//		a=a^c;
//		c=a^c;
//		a=a^c;
//	
//	}
//	if(c>b)
//	{
//		b=b^c;
//		c=b^c;
//		b=b^c;
//	
//	}
//	
//
//	printf("从大到小的顺序：%d %d %d",a,b,c);
//	return 0;
//}
