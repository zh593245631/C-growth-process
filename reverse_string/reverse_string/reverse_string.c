#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void reverse_string(char* string)
{/*
	if(*(string+1) != '\0')
	{
		reverse_string(string+1);
		printf("%c",*string);
	}
	else
		printf("%c",*string);*/
	if(*(string+1))
		reverse_string(string+1);

	printf("%c",*string);
		

 

}
int main()
{
	char arr[]="abcdef";

	

	reverse_string(arr);
	/*printf("%s",arr);*/

	return 0;
}