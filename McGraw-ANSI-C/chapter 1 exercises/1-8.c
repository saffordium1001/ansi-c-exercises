/*********************************************************
*		COMPLEX CALCULATION			 *
*	Source: Ex: 1.1 (P-20) = ANSI-C			 *
**********************************************************/
#include <stdio.h>

int main()
{
	int a=250,b=85,c=25;
	float x;
	x = a/(b-c);
	printf("For A = %d, B = %d, C = %d, X is: %f\n",a,b,c,x);
	a = 300;
	b = 70;
	c = 60; // Value Different Then Book
	x = a/(b-c);
	printf("For A = %d, B = %d, C = %d, X is: %f\n",a,b,c,x);

	return 0;
}
