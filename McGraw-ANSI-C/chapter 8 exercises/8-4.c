/*********************************************************
*		OCCURENCE				 *
*	Source: Ex: 8.4 (P-268) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>

#define SIZE 15
#define LIMIT 20

char words[LIMIT][SIZE];
int size[LIMIT];

int main()
{
	printf("Enter the Text: ");
	int i=0,j,track;
	char t;
	do
	{
		track = 0;
		size[i] =0;
		scanf("%s",words[i]);

		for(j=0;j<i;j++)
		{
			if(strcmp(words[i],words[j]) == 0)
			{
				size[j]++;
				track = 1;
			}
		}
		if(!track)
			i++;
	}
	while((t=getchar()) != '\n');

	printf("\n-------------------\n");
	printf("Words \t Occurence \n");

	for(j=0;j<i;j++)
	{
		printf("%*s %d \n",-SIZE,words[j],size[j]+1);
	}

	return 0;
}
