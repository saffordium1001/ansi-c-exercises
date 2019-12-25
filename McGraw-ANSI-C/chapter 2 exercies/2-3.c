/*********************************************************
*		EVEN NUMBERS				 *
*	Source: Ex: 2.3 (P-50) = ANSI-C			 *
**********************************************************/
#include <stdio.h>

int main()
{
	int i = 1;
	printf("The list of Even Numbers from 1 to 100 is: \n");
	while(i++ < 100)
	{
		if(!(i%2))
			printf("%2d\t",i);
		if(!(i%10))
			printf("\n");
	}

	return 0;
}
