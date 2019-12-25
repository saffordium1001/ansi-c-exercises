/*********************************************************
*		RS TO PAISE				 *
*	Source: Ex: 2.2 (P-50) = ANSI-C			 *
**********************************************************/
#include <stdio.h>

int main()
{
	float amt;
	printf("Enter the Amount in Rs: ");
	scanf("%f",&amt);
	printf("The Amt in Paise will be: %.0f\n",(amt*100));

	return 0;
}
