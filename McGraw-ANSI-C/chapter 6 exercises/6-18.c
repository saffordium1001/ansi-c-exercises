/*********************************************************
*		PRINT INTS.				 *
*	Source: Ex: 6.18 (P-191) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int i,sum=0;
	for(i=1;i<=100;i++)
	{
		if(i%2!=0 && i%3!=0)
		{
			printf("%d \n",i);
			sum++;
		}
	}

	printf("Total: %d",sum);

	return 0;
}
