/*********************************************************
*		PALIDROME				 *
*	Source: Ex: 8.8 (P-269) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char ch[100];
	scanf("%s",ch);
	int len = strlen(ch);
	int i;
	char ch2[100];
	for(i=0;i<len;i++)
	{
		ch[i] = tolower(ch[i]);
		ch2[len-i-1] = ch[i];
	}

	if(strncmp(ch,ch2,len-1) == 0)
		printf("Its A Palindrome \n");
	else
		printf("Its Not A Palindrome \n");
	return 0;
}
