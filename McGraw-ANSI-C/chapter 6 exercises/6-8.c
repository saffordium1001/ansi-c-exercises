/*********************************************************
*		AGE CALC.				 *
*	Source: Ex: 6.8 (P-189) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#define LIMIT 100
int main()
{
	int n=0,i,age;
	for(i =1;i<= LIMIT;i++)
	{
		printf("Enter the Age of Person No. %d: ",i);
		scanf("%d",&age);

		if(age >=50 && age <= 60)
			n++;
	}

	printf("No. of People is the Range of 50 to 60 is: %d \n",n);
	return 0;
}
