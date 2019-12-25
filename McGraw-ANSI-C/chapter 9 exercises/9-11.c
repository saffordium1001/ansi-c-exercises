/*********************************************************
*		LARGEST NO.				 *
*	Source: Ex: 9.11 (P-322) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int data[1000][1000];
void findMax(int m,int n)
{
	int i,j,max = 0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			max = max<data[i][j]?data[i][j]:max;

	printf("Max Element: %d \n",max);
}

int main()
{
	int i,j,m,n;
	printf("Enter the value of M and N: ");
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&data[i][j]);

	findMax(m,n);
	return 0;
}
