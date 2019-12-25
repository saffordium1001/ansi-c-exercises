/*********************************************************
*		EVALUATE FUNC				 *
*	Source: Ex: 9.3 (P-321) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float fact(int n)
{
	int sum = 1;
	while(n >0)
		sum *= n--;

	return (float)sum;
}

float calc(int a,float x)
{
	int i;
	if(a%2 == 0)
		i = 1;
	else
		i = -1;

	return (i*(pow(x,2*a+1)))/(fact(2*a+1));
}
float fOfX(int a,float x,int t)
{
		if(fabs(calc(a+1,x)) < 0.0001 || t<0)
			return 0;
		float ans = calc(a,x);
		ans += fOfX(a+1,x,t-1);
		return ans;
}
int main()
{
	float x;
	printf("Since, it is the expansion of sin X it only works for number less than 1 \n");
	printf("Enter the value of X: ");
	scanf("%f",&x);
	printf("Sin: %.2f \n",sin(x));
	printf("Ans: %.2f \n",fOfX(0,x,10));

	return 0;
}
