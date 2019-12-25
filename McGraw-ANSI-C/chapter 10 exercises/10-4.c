/*********************************************************
*		DATE					 *
*	Source: Ex: 10.4 (P-355) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

struct date {
	int day;
	int month;
	int year;
} a;
int leap(int a);
void getData()
{
	printf("Enter DD MM YYYY: ");
	scanf("%d %d %d",&a.day,&a.month,&a.year);
}
int dataCheck()
{
	if(a.month <= 0 || a.month > 12)
	{
		printf("Ivalid Month \n");
		return 0;
	}

	if(a.month == 1 || a.month == 3 || a.month == 5 || a.month == 7 || a.month == 8 || a.month == 10 || a.month == 12)
	{
		if(a.day <= 0 || a.day > 31)
		{
			printf("Ivalid Day \n");
			return 0;
		}
	}

	if(a.month == 4 || a.month == 6 || a.month == 9 || a.month == 11)
	{
		if(a.day <= 0 || a.day > 30)
		{
			printf("Ivalid Day \n");
			return 0;
		}
	}

	if(a.month == 2)
	{
		if(leap(a.year))
		{
			if(a.day <= 0 || a.day > 29)
			{
				printf("Ivalid Day \n");
				return 0;
			}
		}
		else
		{
			if(a.day <= 0 || a.day > 28)
			{
				printf("Ivalid Day \n");
				return 0;
			}
		}
	}
}

void disp()
{
	switch(a.month)
	{
		case 1: printf("January ");
			break;
		case 2: printf("Febuary ");
			break;
		case 3: printf("March ");
			break;
		case 4: printf("April ");
			break;
		case 5: printf("May ");
			break;
		case 6: printf("June ");
			break;
		case 7: printf("July ");
			break;
		case 8: printf("August ");
			break;
		case 9: printf("September ");
			break;
		case 10: printf("Octuber ");
			break;
		case 11: printf("November ");
			break;
		case 12: printf("December ");
			break;
		}

		printf("%d, %d \n",a.day,a.year);
}

int main()
{
	getData();
	int status = dataCheck();
	if(status == 0)
		printf("Incorrect \n");
	else
		disp();
	return 0;
}

int leap(int a)
{
	if(a%4 != 0)
		return 0;
	else
	{
		if(a%100 == 0)
		{
				if(a%400 == 0)
					return 1;
				else
					return 0;
		}
		else
			return 1;
	}
}
