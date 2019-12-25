/*********************************************************
*		FIBONACCI				 *
*	Source: Ex: 9.5 (P-322) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

void series(int n,int a,int b)
{
	if(n==0)
	{
		printf("\n");
		return;
	}

	printf("%d ",a);
	int temp = a+b;
	a = b;
	b = temp;

	series(n-1,a,b);
	return;
}

int main()
{
	int n;
	printf("Enter the length of Fibonacci Series: ");
	scanf("%d",&n);

	series(n,1,1);
	return 0;
}
