/*********************************************************
*		SPACE(X)				 *
*	Source: Ex: 9.2 (P-321) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

void space(int n);

int main()
{
	int a;
	printf("Enter the Space needed: ");
	scanf("%d",&a);
	printf("Here->");
	space(a);
	printf("Bye!!! \n");

	return 0;
}

void space(int n)
{
	while(n--)
		putchar(' ');
}
