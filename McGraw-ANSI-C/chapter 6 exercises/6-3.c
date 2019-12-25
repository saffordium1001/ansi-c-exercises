/*********************************************************
*		SUM OF DGT				 *
*	Source: Ex: 6.3 (P-188) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int n,sum=0;
	printf("Enter A Number: ");
	scanf("%d",&n);

	while(n > 0)
	{
		sum += n%10;
		n /= 10;
	}
	printf("Sum of Digits: %d \n",sum);
	return 0;
}
