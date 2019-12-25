/*********************************************************
*		FIBONACCI SERIES			 *
*	Source: Ex: 6.4 (P-188) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=1,b=1,n,temp;
	printf("Enter A Number: ");
	scanf("%d",&n);
	if(n <= 0)
		exit(0);
	if(n == 1)
	{
		printf("%d ... \n",a);
		exit(0);
	}
	if(n == 2)
	{
		printf("%d %d... \n",a,b);
		exit(0);
	}
	n -= 3;
	printf("%d %d ",a,b);
	do
	{
		printf("%d ",a+b);
		temp = a;
		a = b;
		b += temp;
	}while(n-- > 0);

	printf("... \n");


	return 0;
}
