/*********************************************************
*		TRAINGLE				 *
*	Source: Ex: 5.11 (P-150) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the Length of 3 Sides: ");
	scanf("%d %d %d",&a,&b,&c);
	a = a*a;
	b = b*b;
	c = c*c;
	if((a==b+c)||(b==a+c)||(c==a+b))
		printf("Its A  Rt. Angled Triangle \n");
	else
		printf("Not a Rt. Angled Traingle \n");

	return 0;
}
