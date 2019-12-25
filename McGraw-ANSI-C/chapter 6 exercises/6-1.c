/*********************************************************
*		REVERSE NO.				 *
*	Source: Ex: 6.1 (P-188) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int n;
	printf("Enter A Number: ");
	scanf("%d",&n);

	while(n > 0)
	{
		printf("%d",n%10);
		n /= 10;
	}
	printf("\n");
	return 0;
}
