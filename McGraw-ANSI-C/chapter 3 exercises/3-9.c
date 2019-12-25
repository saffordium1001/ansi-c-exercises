/*********************************************************
*		COMPLEX CALC.				 *
*	Source: Ex: 3.9 (P-81) = ANSI-C			 *
**********************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
	float dr = 1.5,sc = 12000, hc = 14;
	float eoq, tbo;
	eoq = sqrt((dr*sc*2)/hc);
	tbo = sqrt((2*sc)/(dr*hc));
	printf("For Demand Rate: %.2f \n"
		"Setup Cost: %.2f \n"
		"Holding cost per item: %.2f \n"
		"EOQ = %.2f and TBO = %.2f \n",
		dr,sc,hc,eoq,tbo);
	return 0;
}
