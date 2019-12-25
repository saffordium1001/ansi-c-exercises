/*********************************************************
*		LINEAR EQN.				 *
*	Source: Ex: 5.3 (P-147) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	float x1,x2,a,b,c,d,m,n;
	printf("Enter The Value of A B C D M N: ");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&m,&n);
	if((a*d - c*b) != 0)
	{
		x1 = (m*d - b*n)/(a*d-c*b);
		x2 = (n*a - m*c)/(a*d-c*b);
		printf("X1= %.2f X2= %.2f \n",x1,x2);
	}
	else
		printf("ad - cb is 0... can't proceed!! ");
	return 0;
}
