/*********************************************************
*		EQN. SOLVING				 *
*	Source: Ex: 6.6 (P-188) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>

#define PMAX 10000
#define RMAX 0.21
#define NMAX 10

int main()
{
	int marker = 1;
	int p,n;
	float r;
	for(n=0;n <= NMAX; n++)
	{
		printf("For N = %d \n",n);

		for(p=0;p <= PMAX; p += 1000)
		{
			for(r=0.09;r<=RMAX;r += 0.01)
			{
				if(marker-- == 1)
					printf("%5d \t",p);

				if(p == 0 && r >= 0.1)
					printf("%-6.2f \t \t",r);
				if(p > 0 && r <= 0.2)
					printf("%2.2f \t",p*(pow(1+r,n)));
			}
			printf("\n");
			marker = 1;
		}
	}

	return 0;
}
