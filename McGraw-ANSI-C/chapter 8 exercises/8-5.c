/*********************************************************
*		ALPHABATIC ORDER			 *
*	Source: Ex: 8.5 (P-268) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>

#define LEN 20

int main()
{
	char ch[LEN];
	char temp;
	int i,j;

	printf("Enter the Word: (Either in Upper Caps or Lower Caps) \n");
	scanf("%s",ch);

	for(i=0;i<strlen(ch);i++)
		for(j=0;j<strlen(ch);j++)
			if(ch[i] < ch[j])
			{
				temp = ch[i];
				ch[i] = ch[j];
				ch[j] = temp;
			}


	for(i=0;i<strlen(ch);i++)
	{
		printf("%c",ch[i]);
	}
	printf("\n");

	return 0;
}
