/*********************************************************
*		UPDATE					 *
*	Source: Ex: 10.3 (P-355) = ANSI-C		 *
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

void update()
{
	a.second %= 60;
	a.minute %= 60;
	a.hour %= 24;

	if(++a.second == 60)
	{
			a.second = 0;
			++a.minute;
	}

	if(a.minute == 60)
	{
		a.minute = 0;
		++a.hour;
	}

	if(a.hour == 24)
	{
		a.hour = 0;
	}
}

void disp()
{
	printf("%d:%d:%d \n",a.hour,a.minute,a.second);
}
int main()
{
	getData();
	update();
	disp();

	return 0;
}
