/*********************************************************
*		PRIME NUMBER				 *
*	Source: Ex: 9.7 (P-322) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int isPrime(int n)
{
	int i=2,j=0;
	while(n%i != 0 && i++<n)j++;

	if(j == (n-2))
		return 1;
	else
		return 0;
}

int main()
{
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	printf("Returned Value: %d \n",isPrime(n));
	return 0;
}
