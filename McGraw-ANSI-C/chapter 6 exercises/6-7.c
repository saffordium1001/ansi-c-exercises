/*********************************************************
*		PATTERN PRINT				 *
*	Source: Ex: 6.7 (P-189) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int i,j;
	printf("PART A: \n");
	for(i=1;i<=5;i++)
	{
		for(j=0;j<i;j++)
			printf("%d ",j);
		printf("\n");
	}

	printf("PART B: \n");
	for(i=5;i > 0; i--)
	{
		for(j = 5-i;j > 0;j--)
			printf("  ");
		for(j=i;j>0;j--)
			printf("* ");
		printf("\n");
	}
	return 0;
}
