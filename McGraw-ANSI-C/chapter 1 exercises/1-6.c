/*********************************************************
*		PRNTING MULTIPLICATION TABLE		 *
*	Source: Ex: 1.6 (P-20) = ANSI-C			 *
**********************************************************/
#include <stdio.h>

int main()
{
	int n = 0;
	while(n++ < 10)
	{
		printf("5 x %d = %d \n",n,(5*n));
	}

	return 0;
}
