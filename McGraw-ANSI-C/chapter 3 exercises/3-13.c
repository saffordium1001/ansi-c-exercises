/*********************************************************
*		LARGEST					 *
*	Source: Ex: 3.13 (P-81) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int a,b,c,max;
	printf("Enter the Three Number: ");
	scanf("%d %d %d",&a,&b,&c);
	max = a>b?a:b;
	max = max>c?max:c;

	printf("The Max Among These three is: %d \n",max);
	return 0;
}
