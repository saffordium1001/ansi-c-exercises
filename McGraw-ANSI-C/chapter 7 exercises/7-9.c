/*********************************************************
*		SELECTION SORT				 *
*	Source: Ex: 7.9 (P-235) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

#define SIZE 10

int main()
{
	int n[SIZE],i,j,min=0,temp;
	printf("Enter %d Numbers: \n",SIZE);
	for(i=0;i<SIZE;i++)
		scanf("%d",&n[i]);
	for(i=0;i<SIZE;i++)
	{
		min = i;
		for(j=i;j<SIZE;j++)
			min = (n[min] > n[j])?j:min;

		temp = n[i];
		n[i] = n[min];
		n[min] = temp;

	}

	for(i=0;i<SIZE;i++)
		printf("%d ",n[i]);
	printf("\n");

	return 0;
}
