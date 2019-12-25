/*********************************************************
*		UPPERCASE				 *
*	Source: Ex: 9.8 (P-322) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <ctype.h>

void doUpper(void)
{
	char ch;
	while((ch = getchar()) != '\n')
		putchar(toupper(ch));
	putchar('\n');
}

int main()
{
	printf("Enter A String: ");
	doUpper();
	return 0;
}
