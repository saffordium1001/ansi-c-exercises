/*********************************************************
*		AVERAGES				 *
*	Source: Ex: 9.13 (P-322) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int data[1000][1000],m,n;

float findAvg(int x)
{
	int sum = 0;
	int i;
	for(i=0;i<n;i++)
	{
		sum += data[x][i];
	}

	return sum/(float)n;
}

void printCol(void)
{
	int i,j;
	int sum;
	for(i=0;i<n;i++)
	{
		sum =0;
		for(j=0;j<m;j++)
			sum += data[j][i];

		printf("%2.2f ",sum/(float)m);
	}

	printf("\n");
}

void disp(void)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		printf("       ");
		for(j=0;j<n;j++)
		{
			printf("%4d ",data[i][j]);
		}
		printf(" --> %.2f \n",findAvg(i));
	}
	printf("Avg: --> ");
	printCol();
}

int main()
{
	int i,j;
	printf("Enter the value of M and N: ");
	scanf("%d %d",&m,&n);

	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&data[i][j]);

	disp();
	return 0;
}
