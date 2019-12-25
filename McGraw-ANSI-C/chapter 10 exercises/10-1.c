/*********************************************************
*		TIME_STRUCT				 *
*	Source: Ex: 10.1 (P-355) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

struct time_struct {
	int hour;
	int minute;
	int second;
};

int main()
{
	struct time_struct a;
	a.hour = 16;
	a.second = 51;
	a.minute = 40;

	printf("%d:%d:%d \n",a.hour,a.minute,a.second);

	return 0;
}
