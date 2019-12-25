/*********************************************************
*		FUNCTION EVALUATION			 *
*	Source: Ex: 6.10 (P-189) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>
#define XMAX 9
#define YMAX 9
int main()
{
	int x,y;
	printf("X \t");
	for(x=-1;x<= XMAX;x++)
	{
		for(y=0;y<=YMAX;y++)
		{
			if(x == -1 && y>0)
				printf("0.%d \t",y);
			else if(y == 0 && x >= 0)
				printf("%d.0 \t",x);
			if(x >=0 && y>0)
				printf("%.2f \t",pow(x,-((float)y/10)));
		}
		printf("\n");
	}
	return 0;
}
