/*********************************************************
*		HARMONIC SERIES				 *
*	Source: Ex: 2.1 (P-50) = ANSI-C			 *
**********************************************************/
#include <stdio.h>

int main()
{
	int n;
	float t;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	while(n >= 1)
		t += 1/(float)(n--);
	printf("Sum of the series is: %f\n",t);
	return 0;
}
