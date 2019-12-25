/*********************************************************
*		TRANSPOSE				 *
*	Source: Ex: 7.13 (P-235) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int m,n,i,j,temp;

	printf("Enter the Size of Matrix M x N: ");
	scanf("%d %d",&m,&n);

	int data[m][n];

	printf("Enter the Matrix \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&data[i][j]);
		}
	}

	printf("Matrix is: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",data[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i <= j)
			{
				temp = data[i][j];
				data[i][j] = data[j][i];
				data[j][i] = temp;
			}
		}
	}

	printf("Transpose of the Matrix is: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",data[i][j]);
		}
		printf("\n");
	}

	return 0;
}
