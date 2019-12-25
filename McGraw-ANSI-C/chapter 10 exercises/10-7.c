/*********************************************************
*		NEXTDATE				 *
*	Source: Ex: 10.7 (P-355) = ANSI-C		 *
**********************************************************/


#include <stdio.h>

struct date {
	int day;
	int month;
	int year;
} a;

struct date doNext(struct date a,int n);

int leap(int a);

struct date update(struct date a)
{
	a.day++;
	if(a.month == 1 || a.month == 3 || a.month == 5 || a.month == 7 || a.month == 8 || a.month == 10 || a.month == 12)
	{
			if(a.day > 31)
			{
				a.month++;
				a.day = 1;
			}
	}
	else if(a.month == 4 || a.month == 6 || a.month == 9 || a.month == 11)
	{
		if(a.day > 30)
		{
			a.month++;
			a.day = 1;
		}
	}
	else if(a.month == 2)
	{
		if(leap(a.year))
		{
			if(a.day > 29)
			{
				a.month++;
				a.day = 1;
			}
		}
		else
		{
			if(a.day > 28)
			{
				a.month++;
				a.day = 1;
			}
		}
	}

	if(a.month > 12)
	{
		a.month = 1;
		a.year++;
	}

	return a;
}
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

void disp(struct date xyz)
{
	switch(xyz.month)
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

		printf("%d, %d \n",xyz.day,xyz.year);
}

int main()
{
	getData();
	int status = dataCheck();
	if(status == 0)
		printf("Incorrect \n");
	else
	{
		disp(a);
		struct date b = doNext(a,5);
		disp(b);
	}
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

struct date doNext(struct date a,int n)
{
	struct date b;
	b.day = a.day;
	b.month = a.month;
	b.year = a.year;

	while(n-->0)
	{
		b = update(b);
	}

	return b;
}
