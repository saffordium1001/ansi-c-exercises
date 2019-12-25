/*********************************************************
*		STRINGS					 *
*	Source: Ex: 4.9 (P-111) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	char ch1[10],ch2[10],ch3[10];
	printf("Enter The Name: ");
	scanf("%s %s %s",ch1,ch2,ch3);

	printf("A: %s %c. %s \n",ch1,ch2[0],ch3);
	printf("B: %c.%c. %s \n",ch1[0],ch2[0],ch3);
	printf("C: %s %c.%c.\n",ch3,ch1[0],ch2[0]);


	return 0;
}
