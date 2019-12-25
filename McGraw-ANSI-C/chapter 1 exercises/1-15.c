/*********************************************************
*		CALCULATOR DISPLAY			 *
*	Source: Ex: 1.15 (P-21) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

void box(void);
int main()
{
	int a,b;
	printf("X = ");
	scanf("%d",&a);
	printf("Y = ");
	scanf("%d",&b);
	printf("\nSum = %d \t\t Difference = %d\n"
		"Product = %d \t\t Division = %f\n",a+b,a-b,a*b,(float)a/(float)b);
	return 0;
}
