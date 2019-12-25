/*********************************************************
*		FLOAT MANUPULATE			 *
*	Source: Ex: 3.3 (P-80) = ANSI-C			 *
**********************************************************/
#include <stdio.h>

int main()
{
	float f;
	printf("Enter a Number: ");
	scanf("%f",&f);
	printf("2 Rightmost Intergral Part is: %d \n",(int)f%100);
	return 0;
}
