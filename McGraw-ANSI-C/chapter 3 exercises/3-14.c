/*********************************************************
*		PRINTING MULTIPLE			 *
*	Source: Ex: 3.14 (P-81) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int m,n;
	printf("Enter M and N: ");
	scanf("%d %d",&m,&n);
	if(n%m)
		printf("M is NOT the multiple of N \n");
	else
		printf("M is the multiple of N \n");
	return 0;
}
