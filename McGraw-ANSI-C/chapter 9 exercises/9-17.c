/*********************************************************
*		LOCATE()				 *
*	Source: Ex: 9.17 (P-323) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>

void locate(char* str1,char* str2,int m)
{
	int lenA = strlen(str1);
	int lenB = strlen(str2);
	int i,j;

	for(j=0,i=m;j<lenB;j++,i++)
	{
		str1[i] = str2[j];
	}
}

int main()
{
	char str1[100],str2[100];
	int m;

	printf("Enter the String1 \n");
	scanf("%s",str1);
	printf("Enter the String2\n" );
	scanf("%s",str2);
	printf("Enter the Value of M: ");
	scanf("%d",&m);

	locate(str1,str2,m);

	printf("Str1: %s \n",str1);
	return 0;
}
