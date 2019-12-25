/*********************************************************
*		SUM OF 3 VAR.				 *
*	Source: Ex: 2.8 (P-51) = ANSI-C			 *
**********************************************************/
#include <stdio.h>

int main()
{
	float a,b;
	printf("Enter two Numbers: ");
	scanf("%f %f",&a,&b);
	int c = a+b;
	printf("A = %.2f, B= %.2f, C = %d \n",a,b,c);
}
