/*********************************************************
*		FLOAT MANUPULATE			 *
*	Source: Ex: 3.2 (P-80) = ANSI-C			 *
**********************************************************/
#include <stdio.h>

int main()
{
	float f;
	printf("Enter a Number: ");
	scanf("%f",&f);
	printf("Rightmost Intergral Part is: %d \n",(int)f%10);
	return 0;
}
