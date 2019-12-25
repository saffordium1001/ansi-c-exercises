/*********************************************************
*		STRING EXTRACTION			 *
*	Source: Ex: 8.3 (P-268) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#define SIZE 20
int main()
{
	char text[SIZE],ch;
	int i,n,m;
	printf("Enter the text: \n");
	while((ch = getchar()) != '\n' && i<SIZE)
		text[i++] = ch;
	printf("Enter the Value of M and N: ");
	scanf("%d %d",&m,&n);
	for(i=n;i<n+m;i++)
		putchar(text[i]);
	printf("\n");
	return 0;
}
