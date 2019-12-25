/*********************************************************
*		TRIANGLE				 *
*	Source: Ex: 5.7 (P-149) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#define LIMIT 92
int main()
{
	int count = 1,i,n = 1;
	printf("Part A: \n");
	while(count < LIMIT)
	{
		for(i=0;i < n; i++)
			printf("%d ",count++);

		printf("\n");
		n++;
	}

	printf("Part B: \n");
	int j,start;
	printf("Enter The Number of Lines: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2 == 0)
			start = 0;
		else
			start = 1;

		for(j=0;j < i;j++)
		{
			printf("%d ",start++%2);
		}

		printf("\n");
	}
	return 0;
}
