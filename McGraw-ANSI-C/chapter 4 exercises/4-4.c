/*********************************************************
*		PATTERN					 *
*	Source: Ex: 4.4 (P-110) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
	float a=0,nf[3];  //n of Float
	int i=0,ni[3];  //n of int

	while(i < 4)
	{
		printf("Enter a Number: ");
		scanf("%f",&a);
		if(a >= 0 && a <= 20.00)
		{
			nf[i] = a;
			ni[i] = floor(a);
			// To Check --> printf("n[i] = %d \n",ni[i]);
			i++;
		}
		else
			printf("A should be in between 0 to 20.00 \nTry Again\n");
	}

	for(i=0;i < 4; i++)
	{
		while(ni[i]-- > 0)
			printf("  * \t");
		printf("%.2f \n",nf[i]);
	}
	return 0;
}
