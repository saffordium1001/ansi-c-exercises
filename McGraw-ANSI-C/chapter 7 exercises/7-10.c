/*********************************************************
*		BINARY SEARCH				 *
*	Source: Ex: 7.10 (P-235) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

#define SIZE 10

int list[SIZE] = {15,20,23,35,45,48,56,65,89,100};
int n;

int srch(int u,int l);

int main()
{
	printf("Enter the number to be searched: ");
	scanf("%d",&n);

	int first = 0,last=SIZE-1;
	int mid;
	mid = (first+last)/2;

	while(first <= last)
	{
		if(list[mid] == n)
		{
			printf("Found \n");
			break;
		}
		else
		{
			if(list[mid] <= n)
				first = mid+1;
			else
				last = mid-1;
		}
		mid = (first+last)/2;
	}

	if(first > last)
		printf("Not Found!!! \n");

	return 0;
}
