/*********************************************************
*		ROUND OFF				 *
*	Source: Ex: 4.3 (P-110) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
	float i=4,a;
	printf("Enter 4 numbers: ");
	while(i-- > 0)
	{
		scanf("%f",&a);
		printf("%.0f \t",floorf(a));
	}
	printf("\n");
	return 0;
}
