/*********************************************************
*		SQ. & SQ. ROOT				 *
*	Source: Ex: 3.18 (P-82) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	printf("NO.\tSQR. ROOT\tSQR.\n");
	for(n=0;n<101;n+=10)
	{
		printf("%d\t%.2f\t\t%d \n",n,sqrt(n),n*n);
	}
	return 0;
}
