/*********************************************************
*		SUM OF INTS				 *
*	Source: Ex: 5.13 (P-150) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int i,sum=0;
	for(i=0;i <= 100; i++)
	{
		if(i%6==0 && i%4 !=0)
		{
			sum += i;
			printf("%d \n",i);
		}
	}
	printf("Sum= %d \n",sum);
	return 0;
}
