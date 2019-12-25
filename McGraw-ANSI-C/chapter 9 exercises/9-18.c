/*********************************************************
*		MONTHS					 *
*	Source: Ex: 9.18 (P-323) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

char* name(int a)
{
	switch (a)
	{
		case 1: return "January";
		case 2: return "Febuary";
		case 3: return "March";
		case 4: return "April";
		case 5: return "May";
		case 6: return "June";
		case 7: return "July";
		case 8: return "August";
		case 9: return "September";
		case 10: return "Octuber";
		case 11: return "November";
		case 12: return "December";
	}

	return "INVALID";
}
int main()
{
	printf("Enter the Number of the month: ");
	int m;
	scanf("%d",&m);

	char* a;
	a = name(m);
	printf("Month: %s \n",a);
	return 0;
}
