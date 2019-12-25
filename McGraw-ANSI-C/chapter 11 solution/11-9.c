/*********************************************************
*		REVERSE ARRAY				 *
*	Source: Ex: 11.9 (P-394) = ANSI-C		 *
**********************************************************/

// SAME AS QUESTION 11.1
#include <stdio.h>

#define LIMIT 10

void reverseInt(int*);
void dispInt(int*);

int main()
{
	int p[LIMIT],i;
	printf("Enter %d Numbers \n",LIMIT);
	for(i=0;i<LIMIT;i++)
		scanf("%d",p+i);
	printf("Current Order: \n");
	dispInt(p);
	reverseInt(p);
	printf("Reverse Order: \n");
	dispInt(p);
	return 0;
}

void reverseInt(int* p)
{
	int i;
	for(i=0;i<(LIMIT/2);i++)
	{
		int temp = *(p+i);
		*(p+i) = *(p + (LIMIT-i-1));
		*(p + (LIMIT-i-1)) = temp;
	}
}
void dispInt(int* p)
{
	int i;
	for(i=0;i<LIMIT;i++)
		printf("%d ",*(p+i));

	printf("\n");
}
