#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int p_sushu(int num)
{
	int i = 0;
	for(i=2; i<=sqrt(num); i++)
	{
		if(num%i==0)
			return 0;
	
	}

	return 1;

}
int main()
{
	int num = 0;

	scanf("%d",&num);

	if(1 == p_sushu(num))
		printf("%d是素数\n",num);
	else
		printf("%d不是素数\n",num);


	return 0;
}