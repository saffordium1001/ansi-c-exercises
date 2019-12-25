/*********************************************************
*		PRIME NUMBER				 *
*	Source: Ex: 5.14 (P-150) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int check_prime(int n);

int main()
{
	int n,j;

	printf("Part A: \n");
	printf("Enter a Positive Number: ");
	scanf("%d",&n);
	if(check_prime(n) == 1)
		printf("It's A Prime Number!!! \n");
	else
		printf("Not A Prime Number!!! \n");

	printf("Part B: \n");
	for(j=100;j<=200;j++)
		if(check_prime(j))
			printf("%d \n",j);

	return 0;
}

int check_prime(int n)
{
	int i,count=2;
	for(i=2; i < n; i++)
	{
		if(n%i == 0)
			count++;
	}
	if(count == 2)
		return 1;
	else
		return 0;
}
