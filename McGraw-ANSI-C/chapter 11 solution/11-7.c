/*********************************************************
*		SWAP.SORT				 *
*	Source: Ex: 11.7 (P-394) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>

#define LIMIT 10

void sortName(char name[][20]);
void dispName(char name[][20]);

int main()
{
	int i;
	char name[LIMIT][20];
	printf("Enter %d Names \n",LIMIT);
	for(i=0;i<LIMIT;i++)
		scanf("%s",*(name+i)+0);

	sortName(name);
	printf(" \nSorted Names \n");
	dispName(name);

	return 0;
}

void sortName(char name[][20])
{
	int i,j;
	for(i=0;i<LIMIT;i++)
	{
		for(j=0;j<LIMIT;j++)
		{
			if(strcmp(*(name+i),*(name+j)) < 0)
			{
				char temp[20];
				strcpy(temp,*(name+i));
				strcpy(*(name+i),*(name+j));
				strcpy(*(name+j),temp);
			}
		}
	}
}

void dispName(char name[][20])
{
	int i;
	for(i=0;i<LIMIT;i++)
		printf("%s \n",*(name+i));
}
