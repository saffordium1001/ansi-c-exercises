/*********************************************************
*		MATRIX CALC.				 *
*	Source: Ex: 7.15 (P-236) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int i,j,temp;

	int data1[3][3],data2[3][3];

	printf("Enter the 3x3 Matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&data1[i][j]);
		}
	}

	printf("Enter Another 3x3 Matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&data2[i][j]);
		}
	}

	printf("A+B\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",(data1[i][j] + data2[i][j]));
		}
		printf("\n");
	}

	printf("A-B\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",(data1[i][j] - data2[i][j]));
		}
		printf("\n");
	}
	return 0;
}
