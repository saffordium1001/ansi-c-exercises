/*********************************************************
*		+VE -VE NUMBER				 *
*	Source: Ex: 2.6 (P-51) = ANSI-C			 *
**********************************************************/
#include <stdio.h>

int main()
{
	int c_n=0,c_p=0,n;
	printf("Enter a Number (0 to quit) \n");
	scanf("%d",&n);
	while(n)
	{
		if(n > 0)
			c_p++;
		else
			c_n++;
		scanf("%d",&n);
	}
	printf("The Number of Positve terms are: %d \n",c_p);
	printf("The Number of Negative terms are: %d \n",c_n);

	return 0;
}
