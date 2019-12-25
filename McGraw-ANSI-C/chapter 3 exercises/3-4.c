/*********************************************************
*		AREA & PERIMETER			 *
*	Source: Ex: 3.4 (P-80) = ANSI-C			 *
**********************************************************/
#include <stdio.h>

int main()
{
	float l,b;
	printf("Enter the Lenght and Breadth of Reactangle: ");
	scanf("%f %f",&l,&b);
	printf("Perimeter of the Rectangle is: %.2f \n",2*(l+b));
	printf("Area of the Rectangle is: %.2f \n",l*b);
	return 0;
}
