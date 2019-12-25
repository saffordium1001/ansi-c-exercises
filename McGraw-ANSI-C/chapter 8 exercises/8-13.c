/*********************************************************
*		STRING CPY				 *
*	Source: Ex: 8.13 (P-269) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>

#define LIMIT 100

int main()
{
	int i,j,m,n;
	printf("Enter the String now more than %d character long \n",LIMIT);
	char str1[LIMIT],str2[LIMIT];
	scanf("%s",str1);
	printf("Enter the Value of M and N: ");
	scanf("%d %d",&m,&n);

	for(i=n-1,j=0;i<n+m;i++,j++)
		str2[j] = str1[i];
	str2[j] = '\0';

	printf("Ans: %s \n",str2);
	return 0;
}
