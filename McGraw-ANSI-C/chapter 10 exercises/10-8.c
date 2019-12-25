/*********************************************************
*		DATE					 *
*	Source: Ex: 10.8 (P-356) = ANSI-C		 *
**********************************************************/

#include <stdio.h>

struct date {
	int day;
	int month;
	int year;
} a,b;
int leap(int a);
struct date getData()
{
	struct date xyz;
	printf("Enter DD MM YYYY: ");
	scanf("%d %d %d",&xyz.day,&xyz.month,&xyz.year);

	return xyz;
}
int dataCheck(struct date xyz)
{
	if(xyz.month <= 0 || xyz.month > 12)
	{
		printf("Ivalid Month \n");
		return 0;
	}

	if(xyz.month == 1 || xyz.month == 3 || xyz.month == 5 || xyz.month == 7 || xyz.month == 8 || xyz.month == 10 || xyz.month == 12)
	{
		if(xyz.day <= 0 || xyz.day > 31)
		{
			printf("Ivalid Day \n");
			return 0;
		}
	}

	if(xyz.month == 4 || xyz.month == 6 || xyz.month == 9 || xyz.month == 11)
	{
		if(xyz.day <= 0 || xyz.day > 30)
		{
			printf("Ivalid Day \n");
			return 0;
		}
	}

	if(xyz.month == 2)
	{
		if(leap(xyz.year))
		{
			if(xyz.day <= 0 || xyz.day > 29)
			{
				printf("Invalid Day \n");
				return 0;
			}
		}
		else
		{
			if(xyz.day <= 0 || xyz.day > 28)
			{
				printf("Invalid Day \n");
				return 0;
			}
		}
	}
}

int comp(struct date a,struct date b)
{
	if(a.year < b.year)
		return 1;
	else if(a.year > b.year)
		return 2;
	else
	{
		if(a.month < b.month)
			return 1;
		else if(a.month > b.month)
			return 2;
		else
		{
			if(a.day < b.day)
				return 1;
			else if(a.day > b.day)
				return 2;
			else
				return 0;
		}
	}
}

int main()
{
	a = getData();
	int statusa = dataCheck(a);
	b = getData();
	int statusb = dataCheck(b);
	if(statusa == 0 || statusb == 0)
		printf("Incorrect \n");
	else
	{
		int ans = comp(a,b);

	if(ans == 1)
		printf("Date 1 Comes First \n");
	else if(ans == 2)
		printf("Date 2 Comes First \n");
	else
		printf("Same Date!!! \n");
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
