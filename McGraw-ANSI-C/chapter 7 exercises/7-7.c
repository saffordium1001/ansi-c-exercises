/*********************************************************
*		MATRIX MULTIP.				 *
*	Source: Ex: 7.7 (P-234) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int n;
	printf("Enter The Value of N: ");
	scanf("%d",&n);

	int a[n][n],b[n][n],c[n][n];
	int i,j,k,sum;

	printf("Enter the Matrix A: \n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);

	printf("Enter the Matrix B: \n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&b[i][j]);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum =0;
			for(k=0;k<n;k++)
				sum += (a[i][k]*b[k][j]);
			c[i][j] = sum;
		}

	}

	printf("AxB: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}

	return 0;
}
