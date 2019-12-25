/*********************************************************
*		EXPRESSIONS				 *
*	Source: Ex: 4.2 (P-110) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int x,y;
	printf("Enter Two Numbers: ");
	scanf("%d %d",&x,&y);
	printf("A: %.2f \t B: %.2f \t C:%d \n",((x+y) / (float)(x-y)),((x+y) / (float)2),((x+y) * (x-y)));

	return 0;
}
