#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//16 4 4 4 4 4 4  0 4 0 
// 0 0 0 0 0 0 1  4 0 4
//6 1 1 1 4 0 0  6 6 6 5 6  5  5
//6 4 1 1 4 4 4  6 6 0 0 6  4    
//int main()
//{
//	int a[] = {1,2,3,4};
//
//	printf("%d\n",sizeof(a));   //16
//	printf("%d\n",sizeof(a+0)); //4
//	printf("%d\n",sizeof(*a));  //4
//	printf("%d\n",sizeof(a+1)); //4
//	printf("%d\n",sizeof(a[1])); //4
//	printf("%d\n",sizeof(&a));  //4
//	printf("%d\n",sizeof(*&a)); //16**********
//	printf("%d\n",sizeof(&a+1)); //4
//	printf("%d\n",sizeof(&a[0])); //4
//	printf("%d\n",sizeof(&a[0]+1));//4
//
//	return 0;
//}
//
//
//int main()
//{
//	char arr[] = {'a','b','c','d','e','f'};
//	
//	printf("%d\n",sizeof(arr)); //6
//	printf("%d\n",sizeof(arr+0)); //4
//	printf("%d\n",sizeof(*arr)); //1
//	printf("%d\n",sizeof(arr[1])); //1
//	printf("%d\n",sizeof(&arr)); //4
//	printf("%d\n",sizeof(&arr+1)); //4
//	printf("%d\n",sizeof(&arr[0]+1)); //4
//	printf("%d\n",strlen(arr)); //19
//	printf("%d\n",strlen(arr+0)); //19
//	//printf("%d\n",strlen(*arr)); //1
//	//printf("%d\n",strlen(arr[1])); //1
//	printf("%d\n",strlen(&arr)); //19
//	printf("%d\n",strlen(&arr+1)); //13
//	printf("%d\n",strlen(&arr[0]+1)); //18
//	
//	return 0; 
//}
//6 1 1 1 4 4 4 6 6 0 5 6 0 5
//7 4 1 1 4 4 4 
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n",sizeof(arr)); // 7
//	printf("%d\n",sizeof(arr+0)); // 4
//	printf("%d\n",sizeof(*arr)); // 1
//	printf("%d\n",sizeof(arr[1])); // 1
//	printf("%d\n",sizeof(&arr)); // 4
//	printf("%d\n",sizeof(&arr+1)); //4
//	printf("%d\n",sizeof(&arr[0]+1)); //4
//
//
//
//
//	printf("%d\n",strlen(arr)); // 6
//	printf("%d\n",strlen(arr+0)); // 6
//	//printf("%d\n",strlen(*arr)); //
//	//printf("%d\n",strlen(arr[1])); //
//	printf("%d\n",strlen(&arr)); // 6
//	printf("%d\n",strlen(&arr+1)); // 12
//	printf("%d\n",strlen(&arr[0]+1)); // 5
//
//
//	return 0;
//}
//4 4 4 4 4 4 4  6 5 0 0 4 4 4
//4 4 0          6 5 0 0 0 0 5
//int main()
//{
//	char *p = "abcdef";
//
//	printf("%d\n",sizeof(p)); //4
//	printf("%d\n",sizeof(p+1)); //4
//	printf("%d\n",sizeof(*p)); //1
//	printf("%d\n",sizeof(p[0])); //1
//	printf("%d\n",sizeof(&p)); //4
//	printf("%d\n",sizeof(&p+1)); //4
//	printf("%d\n",sizeof(&p[0]+1)); //4
//
//	printf("%d\n",strlen(p)); // 6
//	printf("%d\n",strlen(p+1)); //5
//	//printf("%d\n",strlen(*p)); //
//	//printf("%d\n",strlen(p[0])); //
//	printf("%d\n",strlen(&p)); // 11 ²»È·¶¨
//	printf("%d\n",strlen(&p+1)); //7
//	printf("%d\n",strlen(&p[0]+1)); //5
//	
//	return 0;
//}
//
//
//48 4 16 4 4 4 16 4 4 4 0
//48 4 16 4 4 4   
//int main()
//{
//	int a[3][4] ={0};
//
//	printf("%d\n",sizeof(a)); // 48
//	printf("%d\n",sizeof(a[0][0])); //4
//	printf("%d\n",sizeof(a[0])); //16
//	printf("%d\n",sizeof(a[0]+1)); //4
//	printf("%d\n",sizeof(*(a[0]+1))); //4
//	printf("%d\n",sizeof(a+1)); // 4
//	printf("%d\n",sizeof(*(a+1))); //16
//	printf("%d\n",sizeof(&a[0]+1)); //4
//	printf("%d\n",sizeof(*(&a[0]+1))); //16
//	printf("%d\n",sizeof(*a)); //16
//	printf("%d\n",sizeof(a[3])); //16
//
//	return 0;
//}
//
//
//int main()
//{
//	int a[5] = {1,2,3,4,5};
//	int *p = (int*)&a+1;
//
//	printf("%d,%d",*(a+1),*(p-1));
//
//	return 0;
//}
//
//4 2
//int main()
//{
//	int a[4] = {1,2,3,4};
//	int *p1 =(int *)(&a+1);
//	int *p2 =(int *)((int)a+1);
//	
//	printf("%d\n",(int)&a);
//	printf("%x,%x",p1[-1],*p2);
//	return 0;
//}
int main()
{
	int a[3][2] = {(0,1),(2,3),(4,5)};//{1£¬3£¬5}
	int *p;
	p = a[0];

	printf("%d",p[0]);
	return 0;
}
