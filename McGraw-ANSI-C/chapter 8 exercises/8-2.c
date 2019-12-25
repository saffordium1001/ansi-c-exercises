/*********************************************************
*		STRING INPUT				 *
*	Source: Ex: 8.2 (P-268) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>

#define SIZE 20

int main()
{
	char ans[SIZE],ch;
	int attempt = 3,i=0;
	printf("Who is the Inventor of C ? \n");
	while(attempt-- > 0)
	{
		i=0;
		while((ch = getchar()) != '\n' && i<SIZE)
			ans[i++] =ch;
		if(strncmp(ans,"dennis",i) == 0)
		{
			printf("Good!!! \n");
			break;
		}
		else
		{
			printf("Opps!! You have %d Attempts left!! \n",attempt);
		}
		if(!attempt)
			printf("Looks like you are out of Luck!! \n");
	}
	return 0;
}
