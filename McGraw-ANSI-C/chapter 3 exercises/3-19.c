/*********************************************************
*		EVEN ODD				 *
*	Source: Ex: 3.19 (P-82) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);

	if(n%2)
		printf("The Number %d is Odd \n",n);
	else
		printf("The Number %d is Even \n",n);
	return 0;
}
