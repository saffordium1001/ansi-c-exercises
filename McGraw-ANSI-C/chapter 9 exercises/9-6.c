/*********************************************************
*		ROUND FLOAT				 *
*	Source: Ex: 9.6 (P-322) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>

float round_f(float f,int d)
{
		int temp = (int)(f*pow(10,d));
		if(temp%10 >= 5)
			temp = temp + (10 -(temp%10));
		return temp/((float)pow(10,d));
}

int main()
{
	float f;
	int d;

	printf("Enter the float: ");
	scanf("%f",&f);

	printf("Enter the place of decimal to round off: ");
	scanf("%d",&d);

	printf("Ans: %.*f \n",d,round_f(f,d));
	return 0;
}
