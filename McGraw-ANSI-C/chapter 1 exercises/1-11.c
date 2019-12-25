/*********************************************************
*		DIST B/W 2 POINTS			 *
*	Source: Ex: 1.11 (P-21) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
	int x1,x2,y1,y2;
	printf("Enter x1 x2 y1 y2: ");
	scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
	float d = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
	printf("Distance b/w the point is: %f\n",d);

	return 0;
}

/* --- NOTE: If program didn't run properly in gcc the use gcc <filename.c> -lm --- */
