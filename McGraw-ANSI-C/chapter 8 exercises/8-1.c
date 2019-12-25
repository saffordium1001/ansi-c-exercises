/*********************************************************
*		ASCII CODES				 *
*	Source: Ex: 8.1 (P-268) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int i;
	char ch;
	printf("Enter Your Name to View in ASCII: \n");
	while((ch = getchar()) != '\n')
	{
		printf("%d ",ch);
	}
	printf("\n");

	return 0;
}
