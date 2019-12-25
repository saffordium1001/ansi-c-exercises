/*********************************************************
*		SUM OF INTS				 *
*	Source: Ex: 5.2 (P-147) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int i,n,sum;
	for(i=100,n=0,sum=0;i <= 200; i++)
	{
		if(i%7 == 0)
		{
			sum += i;
			n++;
		}
	}

	printf("SUM:%d N:%d \n",sum,n);
	return 0;
}
