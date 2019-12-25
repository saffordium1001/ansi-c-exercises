/*********************************************************
*		ODD & EVEN				 *
*	Source: Ex: 5.1 (P-147) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int n;
	printf("Enter A Number: ");
	scanf("%d",&n);
	printf("USING IF...ELSE \n");
	if(n%2 == 0)
		printf("%d is Even \n",n);
	else
		printf("%d is Odd \n",n);
	printf("USING ONLY IF \n");
	if(n%2 == 0)
		printf("%d is Even \n",n);
	if(n%2 != 0)
		printf("%d is Odd \n",n);
	return 0;
}
