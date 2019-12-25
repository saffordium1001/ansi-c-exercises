/*********************************************************
*		Length of String			 *
*	Source: Ex: 7.12 (P-235) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int n=0;
	char ch;
	printf("Enter a String!! \n");
	while((ch = getchar()) != '\n')
		n++;

	printf("Length of the String: %d \n",n);
	return 0;
}
