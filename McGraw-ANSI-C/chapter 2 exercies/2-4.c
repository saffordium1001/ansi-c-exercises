/*********************************************************
*		DIVISION				 *
*	Source: Ex: 2.4 (P-50) = ANSI-C			 *
**********************************************************/
#include <stdio.h>

int main()
{
	float a,b;
	printf("Enter the First Number: ");
	scanf("%f",&a);
	printf("Enter the Second Number: ");
	scanf("%f",&b);
	printf("%.2f / %.2f equals: %.2f \n",a,b,a/b);

	return 0;
}
