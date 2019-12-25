/*********************************************************
*		SCANF & PRINTF				 *
*	Source: Ex: 3.15 (P-81) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int a,b,c,max,min;
	printf("Enter 3 Numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	max = a>b?a:b;
	min = a<b?a:b;
	max = max>c?max:c;
	min = min<c?min:c;
	printf( "Sum \t %d \n"
		"Avg.\t %.2f \n"
		"MAX \t %d \n"
		"MIN \t %d \n",
		a+b+c,(a+b+c)/(float)3,max,min);
	return 0;
}
