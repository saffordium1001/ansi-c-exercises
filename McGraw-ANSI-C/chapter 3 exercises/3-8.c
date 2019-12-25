/*********************************************************
*		U & A CALC.				 *
*	Source: Ex: 3.8 (P-81) = ANSI-C			 *
**********************************************************/
#include <stdio.h>

int main()
{
	int u,a,t;
	printf("Enter a Time Interval (in Sec): ");
	scanf("%d",&t);

	printf("Enter the Value of U and A (Enter 0 0 to quit) : ");
	scanf("%d %d",&u,&a);
	while(u > 0 || a > 0)
	{
		int s = u*t + (a*t*t)/2;
		printf("Distance: %d \n", s);
		printf("Enter the Another Value of U and A: ");
		scanf("%d %d",&u,&a);
	}
	printf("Bye... \n");

	return 0;
}
