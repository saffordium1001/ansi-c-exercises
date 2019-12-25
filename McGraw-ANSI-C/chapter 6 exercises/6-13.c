/*********************************************************
*		EPONENTIAL FUN.				 *
*	Source: Ex: 6.13 (P-190) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>

int fact(int n)
{
	int sum = 1;
	while(n > 0)
		sum *= n--;

	return sum;
}

int main()
{
	float diff=2,sum = 2;
	int n = 2;
	while(diff > 0.00001)
	{
		diff = 1/(float)fact(n-1) - 1/(float)fact(n);
		sum += 1/(float)fact(n++);
	}

	printf("ANS: %f \n",sum);
	return 0;
}
