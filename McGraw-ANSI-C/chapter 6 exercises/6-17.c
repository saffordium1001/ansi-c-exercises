/*********************************************************
*		SIN X GRAPH				 *
*	Source: Ex: 6.17 (P-190) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
	int i,deg=0;
	float y;
	printf("                       Y ---->                     \n");
	printf("  ------------------------------------------------>\n");
	for(i=deg;i < 180;i += 15)
	{
		if(i == 90)
			printf("X |");
		else
			printf("  |");

		y = sin((i*3.14)/90)+1;
		// sy = (y < 0)?-y:y;

		printf("%*d ",(int)(y*25),0);
		printf(" \n");
	}
	printf(" \n \n");

	return 0;
}
