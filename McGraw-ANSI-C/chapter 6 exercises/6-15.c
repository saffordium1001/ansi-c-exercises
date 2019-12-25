/*********************************************************
*		PRESENT VAL. CALC.			 *
*	Source: Ex: 6.15 (P-190) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
	float c,d,n,p;
	printf("Enter the Values of C D P: ");
	scanf("%f %f %f",&c,&d,&p);

	n = log(p/c)/log(1-d);
	if(d > 0)
		printf("N: %.4f \n",n);
	else
		printf("Sry.. No such Value \n");
	return 0;
}
