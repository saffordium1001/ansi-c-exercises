/*********************************************************
*		LEAP YEAR				 *
*	Source: Ex: 9.19 (P-323) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int leap(int a)
{
	if(a%4 != 0)
		return 0;
	else
	{
		if(a%100 == 0)
		{
				if(a%400 == 0)
					return 1;
				else
					return 0;
		}
		else
			return 1;
	}
}

int main()
{
	printf("Enter a Year: ");
	int year;
	scanf("%d",&year);

	if(leap(year))
		printf("Its a Leap Year\n");
	else
		printf("Its not a Leap Year\n");


	return 0;
}
