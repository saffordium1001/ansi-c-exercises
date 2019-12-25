/*********************************************************
*		SUM OF DIGITS				 *
*	Source: Ex: 3.11 (P-81) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int n,sum = 0;
	printf("Enter a Number: ");
	scanf("%d", &n);
	while(n > 0)
	{
		sum += n%10;
		n = n/10;
	}
	printf("The Sum of Digits is: %d \n",sum);
	return 0;
}
