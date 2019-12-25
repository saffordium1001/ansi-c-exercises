/*********************************************************
*		TYPEDEF					 *
*	Source: Ex: 2.9 (P-51) = ANSI-C			 *
**********************************************************/
#include <stdio.h>

int main()
{
	typedef int num;
	num n1,n2;
	printf("Enter the 2 Numbers: ");
	scanf("%d %d",&n1,&n2);
	printf("Sum of two numbers is: %d \n",n1+n2);

	return 0;
}
