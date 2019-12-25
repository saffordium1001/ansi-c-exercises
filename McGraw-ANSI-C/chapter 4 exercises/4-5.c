/*********************************************************
*		MULTIPLICATION				 *
*	Source: Ex: 4.5 (P-110) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int x,y;
	printf("Enter Two 2-Digit Number: ");
	scanf("%d %d",&x,&y);

	printf("%23d\n",x);
	printf("%11c%12d\n",'X',y);
	printf("%10c-------------\n",' ');
	printf("%d x %d is%14d\n",(y%10),x,(x*(y%10)));
	printf("%d x %d is%14d\n",(y - y%10)/10,x,(x*(y - y%10)/10));
	printf("%10c-------------\n",' ');
	printf("Add Them:%14d\n",x*y);
	printf("%10c-------------\n",' ');
	return 0;
}
