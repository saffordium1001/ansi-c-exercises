/*********************************************************
*		ELECTIONS				 *
*	Source: Ex: 7.3 (P-234) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
		int count[6]={0,0,0,0,0,0};
	int i=1;

	while(i)
	{
		printf("Enter Your Vote(0 to quit): ");
		scanf("%d",&i);

		if(i > 0 && i < 6)
			count[i-1]++;
		else
			count[5]++;
	}

	for(i=0;i<5;i++)
	{
		printf("No. of Votes for Candidate %d is: %d \n",i+1,count[i]);
	}
		printf("No. of Spoilt Votes is: %d \n",count[5]-1);

	return 0;
}
