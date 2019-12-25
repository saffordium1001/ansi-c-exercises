/*********************************************************
*		BINARY SEARCH				 *
*	Source: Ex: 11.8 (P-394) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

#define LIMIT 10

int binarySearch(int*,int*);

int main()
{
	int key;
	int arr[LIMIT]={1,13,24,39,41,56,68,73,82,95};
	printf("Enter The Key To Search: ");
	scanf("%d",&key);
	if(binarySearch(arr,&key))
		printf("Found!!! \n");
	else
		printf("Not Found!!!\n");

	return 0;
}

int binarySearch(int* data,int* key)
{
	int first=0;
	int last = LIMIT-1;
	while(first < last)
	{
		int mid;
		mid = (first+last)/2;
		if(*key == *(data+mid))
		 	return 1;
		else if(*key > *(data+mid))
			first = (mid)+1;
		else
			last = mid;
	}
	if(*(data+first) == *key)
		return 1;

	return 0;
}
