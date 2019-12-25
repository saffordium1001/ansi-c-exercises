/*********************************************************
*		BINARY EQUIVALENT			 *
*	Source: Ex: 6.11 (P-189) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);

	if(n < 0)
	{
		printf("Sry.. Negavite No. is Allowed.. ||| Converting to Positive \n");
		n  = -n;
	}

	printf("%d in Binary is: ",n);
	if(!n)
		printf("0 ");

	while(n > 0)
	{
		printf("%d ",n%2);
		if(n%2 == 0)
			n /= 2;
		else
			n = (n-1)/2;
	}
	printf("\n");
	return 0;
}
