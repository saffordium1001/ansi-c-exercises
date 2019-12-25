/*********************************************************
*		POLYNOMIAL				 *
*	Source: Ex: 9.4 (P-321) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int degree,coeff[100],x;

void calc(int index,int ans)
{
		if(index == degree)
		{
			ans = ans + coeff[index];
			printf("Ans: %d \n",ans);
			return;
		}

		ans = ans + coeff[index];
		ans = ans*x;

		calc(index+1,ans);
		return;
}
int main()
{
	int i;
	printf("Enter the degree of the polynomial: ");
	scanf("%d",&degree);
	printf("Enter the cofficents of the equation \n");
	for(i=0;i<=degree;i++)
		scanf("%d",&coeff[i]);
	printf("Enter the value of X: ");
	scanf("%d",&x);
	calc(0,0);
	return 0;
}
