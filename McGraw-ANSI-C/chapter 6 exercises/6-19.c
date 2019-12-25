/*********************************************************
*		PRINT PATTERN				 *
*	Source: Ex: 6.19 (P-191) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i!=2 || j!=2)
				printf("S ");
			else
				printf("O ");
		}
		printf("\n");
	}
	return 0;
}
