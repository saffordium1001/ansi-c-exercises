/*********************************************************
*		TEMP. CONVERSION			 *
*	Source: Ex: 1.9 (P-21) = ANSI-C			 *
**********************************************************/
#include <stdio.h>

int main()
{
	float c,f;
	printf("Enter Temperature in Celsius: ");
	scanf("%f",&c);
	f = ((9*c)/5) + 32;
	printf("Temperature in Fahrenheit: %f \n",f);
	printf("\nNOW \n\n");
	printf("Enter Temperature in Fahrenheit: ");
	scanf("%f",&f);
	c = (5*(f-32))/9;
	printf("Temperature in Celsius: %f \n",c);
	return 0;
}
