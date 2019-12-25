/*********************************************************
*		COMPARE INT				 *
*	Source: Ex: 11.10 (P-394) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

#define LIMIT 10

void comp(int*,int*);

int main()
{
	int arr1[LIMIT] = {1,2,3,4,5,6,7,8,9};
	int arr2[LIMIT] = {1,2,3,4,5,6,7,8,9};
	int arr3[LIMIT] = {1,2,3,4,5,7,9,8,6};

	printf("Comparing 1 and 2 \n");
	comp(arr1,arr2);
	printf("Comparing 2 and 3 \n");
	comp(arr2,arr3);

	return 0;
}

void comp(int* a,int* b)
{
	int i;
	for(i=0;i<LIMIT;i++)
	{
		if(*(a+i) == *(b+i))
			continue;
		else
		{
			printf("DIFF.\n");
			return;
		}
	}

	printf("SAME!!! \n");
}
