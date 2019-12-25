/*********************************************************
*		COMPLEX CALC.				 *
*	Source: Ex: 3.10 (P-81) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
	float r,l,c=0.01,c1;
	printf("Enter the Value of R L: ");
	scanf("%f %f", &r,&l);
	printf("For R = %.2f, And L= %.2f \n",r,l);
	r = r*r;
	printf("C\tF \n");
	for(c; c <= 0.1; c += 0.01)
	{
		c1 = 4*c*c;
		printf("%.2f\t%.2f \n",c,sqrt((1/l*c)- (r/c1)) );
	}

	return 0;
}

// MUST GIVE VERY LOW VALUE OF L FOR IT TO WORK!!! (EG: R=1 L=0.0000000056)
