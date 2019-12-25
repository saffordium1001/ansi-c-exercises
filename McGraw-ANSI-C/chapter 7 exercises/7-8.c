/*********************************************************
*		5X5 MATRIX				 *
*	Source: Ex: 7.8 (P-235) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int mat[5][5];
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i+j == 4)
			{
				mat[i][j] = 0;
			}
			else
			{
				if(i+j < 4)
					mat[i][j] = 1;
				else
					mat[i][j] = -1;
			}
		}
	}

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%+d ",mat[i][j]);
		}
		printf("\n");
	}

	return 0;
}
