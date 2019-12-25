/*********************************************************
*		DAY_NAME				 *
*	Source: Ex: 11.6 (P-394) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

char* day_name(int);

int main()
{
	int num;
	printf("Enter A Number: ");
	scanf("%d",&num);
	char* ans = day_name(num);
	printf("%s\n",ans);
	return 0;
}

char* day_name(int n)
{
	static char name[8][20] = {"Monday","Tuesday","Wednesday","Thrusday","Friday","Saturday","Sunday","INVALID"};
	if(n < 8)
		return (*(name+n-1)+0);
	return (*(name+7)+0);
}
