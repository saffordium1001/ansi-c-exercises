/*********************************************************
*		OCCURRENCES				 *
*	Source: Ex: 11.5 (P-394) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>

char* makeStr(char*,char);

int main()
{
	char text[100],ch;
	printf("Enter The String: ");
	scanf("%s",text);
	getchar();
	printf("Enter the Character to Delete: ");
	ch = getchar();

	makeStr(text,ch);
	printf("Ans: \n%s \n",text);
	return 0;
}

char* makeStr(char* text,char key)
{
	char temp[100];
	int j,i = 0;
	int len = strlen(text);
	for(j=0,i=0;i<=len;i++)
	{
		if(*(text+i) != key)
		{
			*(temp+j) = *(text+i);
			j++;
		}
		else
			continue;
	}
	*(temp+j) = '\0';
	strncpy(text,temp,j);
	return text;
}
