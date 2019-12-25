/*********************************************************
*		FUNCTION				 *
*	Source: Ex: 5.9 (P-149) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int x,y;
	printf("Enter The Value of X: ");
	scanf("%d",&x);

	printf("USING NESTED IF \n");
	if(x > 0)
		y = 1;
	if(x == 0)
		y = 0;
	if(x < 0)
		y = -1;
	printf("Y: %d \n",y);

	printf("USING IF...ELSE \n");
	if(x > 0)
		y = 1;
	else if(x == 0)
		y = 0;
	else if(x < 0)
		y = -1;
	printf("Y: %d \n",y);

	printf("USING COND. OPP. \n");
	y = x>0?1:(x<0?-1:0);
	printf("Y: %d \n",y);
	return 0;
}
