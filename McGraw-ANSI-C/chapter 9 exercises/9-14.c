/*********************************************************
*		ARRAYS					 *
*	Source: Ex: 9.14 (P-322) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int sizeA,sizeB,indexC,arr1[1000],arr2[1000],arr3[2000];

void disp(void)
{
	int i;
	for(i=0;i<(sizeA+sizeB);i++)
	{
		printf("%d ",arr3[i]);
	}
	printf("\n");
}
void doMerge(void)
{
	indexC = 0;
	int indexA=0,indexB=0;
	while((indexA<sizeA) && (indexB<sizeB))
	{
		if(arr1[indexA] < arr2[indexB])
			arr3[indexC] = arr1[indexA++];
		else
			arr3[indexC] = arr2[indexB++];
		indexC++;
	}

	while(indexA < sizeA)
	{
		arr3[indexC] = arr1[indexA++];
		indexC++;
	}

	while(indexB < sizeB)
	{
		arr3[indexC] = arr2[indexB++];
		indexC++;
	}

	disp();
}
void doSort(void)
{
	int i,j;
	for(i=0;i<sizeA;i++)
	{
		for(j=0;j<sizeA;j++)
		{
			if(arr1[i] < arr1[j])
			{
				int temp = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = temp;
			}
		}
	}

	for(i=0;i<sizeB;i++)
	{
		for(j=0;j<sizeB;j++)
		{
			if(arr2[i] < arr2[j])
			{
				int temp = arr2[i];
				arr2[i] = arr2[j];
				arr2[j] = temp;
			}
		}
	}

	doMerge();
}
int main()
{
	int i;

	printf("Enter the size of the array 1: ");
	scanf("%d",&sizeA);

	printf("Enter the array 1 \n");
	for(i=0;i<sizeA;i++)
		scanf("%d",&arr1[i]);


	printf("Enter the size of the array 2: ");
	scanf("%d",&sizeB);

	printf("Enter the array 2 \n");
	for(i=0;i<sizeB;i++)
		scanf("%d",&arr2[i]);

	printf("Sorted Array: \n");
	doSort();

	return 0;
}
