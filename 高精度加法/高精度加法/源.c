#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<string.h>
#include<assert.h>
#define M 101
#define N M+1
char* reverse(char *str, int len)
{
	int n = len / 2;
	for (int i = 0; i < n; i++){
		char tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
	}
	return str;
}
char* BigNumberAdd(char* a, char* b, char* c)
{
	assert(a&&b&&c);
	int size_a = strlen(a);
	int size_b = strlen(b);
	reverse(a, size_a);
	reverse(b, size_b);
	int i = 0;
	int max = size_a >= size_b ? size_a : size_b;
	while (i<max)
	{
		if (a[i] == '\0'||b[i] == '\0'){
			if (max == size_a)
				b[i] = '0';
			else
				a[i] = '0';
		}
			
		int r = (a[i] + b[i] + c[i] - 3 * '0');
		c[i] = r % 10 + '0';
		c[i + 1] = r / 10 + '0';
		i++;
	}
	int size_c = strlen(c);
	reverse(c, size_c);
	
	while (*c == '0')
		c++;
	return c;

}
int main()
{
	char a[M] = "0";
	char b[M] = "0";
	char c[N] = "0";
	//memset(c,'0',M);
	scanf("%s", a);
	scanf("%s", b);
	//printf("%c",'\0'+1);
	printf("%s\n", BigNumberAdd(a, b, c));
	system("pause");
	return 0;
}