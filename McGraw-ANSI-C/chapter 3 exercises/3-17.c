/*********************************************************
*		SIN & COS				 *
*	Source: Ex: 3.17 (P-81) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
	int i = 0;
	float theta = 0;
	printf("ANGLE\tSIN\tCOS\n");
	for(i;i < 181; i += 15)
	{
		// 180 = 2 pi
		theta = (PI*i)/90;
		printf("%d\t%.2f\t%.2f \n",i,sin(theta),cos(theta));
	}
	return 0;
}
