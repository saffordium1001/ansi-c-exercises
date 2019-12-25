/*********************************************************
*		OCCUERRENCES				 *
*	Source: Ex: 7.12 (P-235) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int n;
	char ch='b',c = 'a';
	printf("Enter the Special Character \n");
	c = getc(stdin);
	printf("Enter a String!! \n");
	ch = getchar(); //To flush the input
	while((ch = getchar()) != '\n')
	{
		if(c == ch)
			n++;
	}

	printf("No. of Sp. Character: %d \n",n);
	return 0;
}
