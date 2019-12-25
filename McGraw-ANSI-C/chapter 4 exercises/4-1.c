/*********************************************************
*		STRINGS					 *
*	Source: Ex: 4.1 (P-110) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	char i,ch[100],c;
	int len=0;
	printf("Enter The String: (Eg: WORD PROCESSING): \n");
	while((c = getchar()) != '\n')
		ch[len++] = c;

	for(i=0; i < len; i++)
		putchar(ch[i]);
	printf("\n");

	for(i=0; i < len; i++)
		if(ch[i] == ' ')
			printf("\n");
		else
			putchar(ch[i]);


	printf("\n%c.",ch[0]);
	for(i=0; i < len-1; i++)
	{
		if(ch[i] == ' ')
			printf("%c.",ch[i+1]);
	}
	printf("\n");
	return 0;
}
