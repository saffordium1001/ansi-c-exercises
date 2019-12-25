/*********************************************************
*		SYMBOLIC CONSTANT			 *
*	Source: Ex: 2.10 (P-51) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	const float pi = 3.14;
	float r;
	printf("Enter the Value for the Radius of Cirlce: ");
	scanf("%f",&r);
	printf("Area of the Cirlce is: %.2f \n",(pi*r*r));

	return 0;
}
