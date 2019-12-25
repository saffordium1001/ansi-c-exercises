/*********************************************************
*		ISBN CODE				 *
*	Source: Ex: 7.14 (P-236) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#define SIZE 10
int main()
{
	long long int code;
	int sum=0,i=9;
	printf("Enter the 10 digit ISBN code: ");
	scanf("%lld",&code);
	int r = code%10;
	code = code/10;
	while(code > 0)
	{
		sum += i*(code%10);
		code /= 10;
		i--;
	}

	if(sum%11 == r)
		printf("Its a ISBN Code \n");
	else
		printf("Its not a ISBN Code \n");
	return 0;
}
