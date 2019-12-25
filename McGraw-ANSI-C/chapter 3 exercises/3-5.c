/*********************************************************
*		PATTERN					 *
*	Source: Ex: 3.5 (P-80) = ANSI-C			 *
**********************************************************/
#include <stdio.h>

int main()
{
	int i,n,j;
	printf("Enter a Number: ");
	scanf("%d",&n);
	// Finding Length
	int len=0,temp = n;
	while(temp > 0)
	{
		len++;
		temp /= 10;
	}
	int ar[len];
	temp = n;
	for(i = 0;i < len; i++)
	{
		ar[len-i-1] = temp%10;
		temp /= 10;
	}
	for(i = 0;i < len; i++)
	{
		for(j = i; j < len; j++)
			printf("%d ",ar[j]);
		printf("\n");
	}
	return 0;
}
