/*********************************************************
*		MATRIX MULTIPLY				 *
*	Source: Ex: 9.12 (P-322) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int a[1000][1000],b[1000][1000],c[1000][1000];
int i,j,k,sum;

void doMult(int m,int n)
{
	printf("Enter the Matrix A: \n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);

	printf("Enter the Matrix B: \n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&b[i][j]);

	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			sum =0;
			for(k=0;k<n;k++)
				sum += (a[i][k]*b[k][j]);
			c[i][j] = sum;
		}

	}

	printf("AxB: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
}

int main()
{
	int n,m;
	printf("Enter The Value of M and N: ");
	scanf("%d %d",&n,&m);

	doMult(m,n);

	return 0;
}
