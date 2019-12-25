/*********************************************************
*		STRSTR					 *
*	Source: Ex: 8.12 (P-269) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>

#define LIMIT 100

int main()
{
	printf("Enter the String: \n");
	int i=0,count = 0;;
	char str1[LIMIT],key[LIMIT],str2[LIMIT];
	scanf("%s",str1);
	printf("Enter The Key: \n");
	scanf("%s",key);
	strcpy(str2,str1);
	while(strstr(str2,key) && count<5)
	{
		count++;
		strcpy(str2,strstr(str1,key));
		for(i=strlen(key);i<=strlen(str2);i++)
			str1[i-strlen(key)] = str2[i];
		strncpy(str2,str1,strlen(str1));
		str2[strlen(str1)] = '\0';
		str2[strlen(str1)+1] = '\0';
	}
printf("No. of Time \"%s\" appears is: ",key);
		printf("%d \n",count);
	return 0;
}
