/*********************************************************
*		INSERTION				 *
*	Source: Ex: 11.3 (P-394) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

#define LIMIT 10

void addValue(int*,int);
void disp(int*,int);

int main()
{
	int arr[LIMIT+1] = {1,2,3,5,6,8,10,28,45,100};
	int num;
	printf("Before Insertion \n");
	disp(arr,LIMIT);
	printf("Enter A Value To Insert: ");
	scanf("%d",&num);
	printf("After Insertion \n");
	addValue(arr,num);
	disp(arr,LIMIT+1);

	return 0;
}

void addValue(int* arr,int key)
{
	int i=0;
	while(*(arr+i) < key)	i++;
	int temp = *(arr+i);
	*(arr+i) = key;
	while(i++ <= LIMIT)
	{
		key = *(arr+i);
		*(arr+i) = temp;
		temp = key;
	}
}
void disp(int* a,int len)
{
	int i=0;
	for(i=0;i<len;i++)
		printf("%d ",*(a+i));

	printf("\n");
}
