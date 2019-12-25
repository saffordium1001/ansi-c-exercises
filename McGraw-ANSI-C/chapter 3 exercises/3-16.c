/*********************************************************
*		BILL PRINT				 *
*	Source: Ex: 3.16 (P-81) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int code,calls;
	printf("Enter The 5-digit Costumer Number (0 To Quit): ");
	scanf("%d",&code);
	while(code)
	{
		printf("Enter the Number of Calls: ");
		scanf("%d",&calls);
		printf("*****%d****** \n",code);
		calls = calls >= 100?calls:calls+100;
		printf("BILL AMT: %.2f \n",250 + (float)(calls-100)*1.25);
		printf("Enter The 5-digit Costumer Number (0 To Quit): ");
		scanf("%d",&code);
	}
	return 0;
}
