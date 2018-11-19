#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
void reverse(char* left,char* right)
{
	assert(left);
	assert(right);
	while(left<right)
	{
		char tmp = *left;
			 *left = *right;
			 *right = tmp;
			 left++;
			 right--;
	
	}


}

//char* reverse_str(char* str, const int sz)
//{	
//	char *str1 = str;
//	char *left = str;
//	char *right = str+sz-2;
//	assert(str);
//	
//	reverse(left,right); // 先整体反转一次
//
//	while(*str1)
//	{
//		 left = str1;
//
//		while(*str1!=' '&&*str1!='\0')
//		{
//			str1++;
//		}
//		right = str1-1;
//		reverse(left,right); //遇到空格把单词反转回来；
//		if(*str1==' ')
//		{
//			str1++;	
//		}
//	
//	}
//	return str;
//
//
//}
//优化
void reverse_str(char a[])
{
	//assert(a);
	char* star = a;
	char* end = star;
	while(*end)
	{
		if(*end==' ')
		{
			reverse(star,end-1);
			star = end+1;
		}
		end++;
	
	}
		reverse(star,end-1);
		reverse(a,end-1);
}
int main()
{
	char arr[] = "student a am i";
	int sz = sizeof(arr)/sizeof(arr[0]);

	printf("%s\n",arr);
	/*printf("%s\n",reverse_str(arr,sz));*/
	reverse_str(arr);
	printf("%s\n",arr);


	return 0;
}