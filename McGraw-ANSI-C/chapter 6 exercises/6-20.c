/*********************************************************
*		+VE & -VE SUMS				 *
*	Source: Ex: 6.20 (P-191) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int sum=0,n,i,no=0;
	for(i=0;i<10;i++)
	{
		printf("Enter A Number: ");
		scanf("%d",&n);
		if(n > 0)
		{
			sum += n;
			no++;
		}
		if(sum > 999)
			break;

	}
	printf("Sum of %d Positive Integers is: %d \n",no,sum);

	return 0;
}
