/*********************************************************
*		FACTORIAL				 *
*	Source: Ex: 6.2 (P-188) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int i,n,sum = 1,temp;
	printf("Enter A Number: ");
	scanf("%d",&n);

	for(i=1;i <= n; i++)
	{
		printf("%d! is: ",i);
		temp = i;
		sum = 1;
		while(temp > 0)
			sum *= temp--;
		printf("%d \n",sum);
	}
	return 0;
}
