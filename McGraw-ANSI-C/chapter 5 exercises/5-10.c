/*********************************************************
*		QUAD. EQN.				 *
*	Source: Ex: 5.10 (P-149) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


// In place of using exit() you can if..else..if.. statement

// Forumula in the book is wrong
int main()
{
	int a,b,c;
	float x1,x2;
	printf("Enter the value of a b c: ");
	scanf("%d %d %d",&a,&b,&c);

	if(a == b && a == 0)
	{
		printf("No Solution \n");
		exit(0);
	}

	if(a == 0)
	{
		x1 = -(c/b);
		printf("Only on Solution: X =%.2f \n",x1);
		exit(0);
	}

	int temp = b*b - 4*a*c;

	if(temp < 0)
	{
		printf("No Real Roots \n");
		exit(0);
	}

	printf("temp =%d \n",temp);

	x1 = (-b + sqrt(temp))/2*a;
	x2 = (-b - sqrt(temp))/2*a;

	printf("Roots are X1=%.2f X2=%.2f \n",x1,x2);

	return 0;
}
