/*********************************************************
*		REPACE WORD				 *
*	Source: Ex: 8.6 (P-268) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>

#define LIMIT 15
#define LEN 20

int main()
{
	int i=0,j;
	char words[LIMIT][LEN];
	char t,key[LEN],word[LEN];

	printf("Enter The Word to Replace: ");
	scanf("%s",word);
	printf("Enter the Key Word: ");
	scanf("%s",key);

	printf("Enter The String: ");
	do
	{
		scanf("%s",words[i]);
		if(strcmp(words[i],word) == 0)
			strncpy(words[i],key,strlen(key));
		i++;
	}
	while((t=getchar()) != '\n');

	for(j=0;j<i;j++)
		printf("%s ",words[j]);
	printf("\n");

	return 0;
}
