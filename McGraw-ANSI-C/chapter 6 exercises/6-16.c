/*********************************************************
*		PATTERN PRINT.				 *
*	Source: Ex: 6.16 (P-190) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int i,j;
	printf("PART A: \n \n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			printf("S ");
		printf("\n");
	}

	printf("\nPART B: \n \n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			if((i == 0) || (j==0) || (i==4) || (j==4))
				printf("S ");
			else
				printf("  ");
		printf("\n");
	}

	return 0;
}
