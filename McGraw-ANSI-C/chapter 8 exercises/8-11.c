/*********************************************************
*		STRCMP					 *
*	Source: Ex: 8.11 (P-269) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>
#define LIMIT 30
int main()
{
	printf("Enter two String of Length less than %d \n",LIMIT);
	char ch,str1[LIMIT],str2[LIMIT];
	int i = 0;
	while((ch = getchar())!= '\n' && i<LIMIT)
		str1[i++] = ch;
	i =0;
	while((ch = getchar())!= '\n' && i<LIMIT)
		str2[i++] = ch;
		int len = (strlen(str1)>strlen(str2)?strlen(str2):strlen(str1));
	if(strncmp(str1,str2,len) > 0)
		printf("Greater Than 0 \n");
	else if(strncmp(str1,str2,len) == 0)
		printf("Equal to 0 \n");
	else
		printf("Less Than 0 \n");
	return 0;
}
