/*********************************************************
*		FIBONACCI SERIES			 *
*	Source: Ex: 6.5 (P-188) = ANSI-C		 *
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
	n -= 2;
	printf("%d %d ",a,b);
	while(n-- > 0)
	{
		printf("%d ",a+b);
		temp = a;
		a = b;
		b += temp;
	}

	printf("... \n");

	return 0;
}
