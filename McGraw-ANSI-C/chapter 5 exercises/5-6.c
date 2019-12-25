/*********************************************************
*		SQRT ROOT				 *
*	Source: Ex: 5.6 (P-148) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
	int trigger = 1;
	float row,col;
	for(row=-1.00;row < 10; row += 1)
	{
		if(trigger-- > 0)
			printf("Number \t");
		else
			printf("%.1f \t",row);
		for(col = 0; col < 1; col += 0.1)
		{
				if(row==-1.00)
					printf("%02.1f \t",col);
				else
					printf("%.2f \t",sqrt(row+col));
		}
		printf("\n");
	}

	return 0;
}
