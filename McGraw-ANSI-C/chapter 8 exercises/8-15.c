/*********************************************************
*		PATTERN DISPLAY				 *
*	Source: Ex: 8.15 (P-269) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
	int i,j,k,track;
	char str[] = "123456789";
	for(i=0;i<5;i++)
	{
		j=0;
		while(j++<4-i)
			printf("  ");
		for(j=0,k=i,track=0;j<2*i+1;j++)
		{
			printf("%c ",str[k]);
			if(track++ < i)
				k++;
			else
				k--;
		}
		printf("\n");
	}
	return 0;
}
