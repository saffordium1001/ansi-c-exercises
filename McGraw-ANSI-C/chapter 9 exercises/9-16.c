/*********************************************************
*		FIND()					 *
*	Source: Ex: 9.16 (P-323) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>

int find(char* a,char ch)
{
	int len = strlen(a);
	int i;
	for(i=0;i<len;i++)
	{
		if(ch == a[i])
			return 1;
	}

	return 0;
}

int main()
{
	char str1[1000],ch;

	printf("Enter the haystack \n");
	scanf("%s",str1);

	printf("Enter the Needle: ");
	getchar();
	ch = getchar();

	printf("Returned Value: %d \n",find(str1,ch));

	return 0;
}
