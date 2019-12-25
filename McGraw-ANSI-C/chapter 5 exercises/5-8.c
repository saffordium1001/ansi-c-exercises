/*********************************************************
*		BILL					 *
*	Source: Ex: 5.8 (P-149) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int p,n;
	float d,amt;
	printf("Type: (1 For Mild Cloth) (2 For Handloom Items): ");
	scanf("%d",&n);
	printf("Enter the Price of The Article: ");
	scanf("%d",&p);

	if(n == 1)
	{
		if(p <= 100)
			d = 0;
		else if(p <= 200)
			      d = 5;
		     else if(p <= 300)
			         d = 7.5;
			  else
			            d=10;

	}

	if(n == 2)
	{
		if(p <= 100)
			d = 5;
		else if(p <= 200)
			      d = 7.5;
		     else if(p <= 300)
			         d = 10;
			  else
			            d=15;
	}

	amt = p - (p*d)/100;

	printf("Amount to Be Paid: %.2f \nAfter a Discount of %.2f% \n",amt,d);
	return 0;
}
