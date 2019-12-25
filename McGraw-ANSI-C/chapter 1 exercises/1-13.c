/*********************************************************
*		AREA OF CIRCLE				 *
*	Source: Ex: 1.13 (P-21) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>

#define PI 3.14
int main()
{
	int x1=2,x2=5,y1=2,y2=6;
	float r = (sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))))/2;
	float a = PI*r*r;
	float p = 2*PI*r;
	printf("Area of Cirlce: %f \nPerimeter of the circle: %f\n",a,p);

	return 0;
}

/* --- NOTE: If program didn't run properly in gcc the use gcc <filename.c> -lm --- */
