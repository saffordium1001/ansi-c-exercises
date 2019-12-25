/*********************************************************
*		STRUCT_FUNC				 *
*	Source: Ex: 10.2 (P-355) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

struct time_struct {
	int hour;
	int minute;
	int second;
} a;

void getData()
{
	printf("Enter HOUR MIN SEC: ");
	scanf("%d %d %d",&a.hour,&a.minute,&a.second);
}

void disp()
{
	a.second %= 60;
	a.minute %= 60;
	a.hour %= 24;

	printf("%d:%d:%d \n",a.hour,a.minute,a.second);
}
int main()
{
	getData();
	disp();

	return 0;
}
