/*********************************************************
*		PRINTING NUMBER				 *
*	Source: Ex: 3.7 (P-81) = ANSI-C			 *
**********************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
	float n;
	printf("Enter a Number: ");
	scanf("%f",&n);
	printf("%.0f %.5f %.0f \n",ceilf(n),n,floorf(n));
	return 0;
}
