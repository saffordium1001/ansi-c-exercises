	/*********************************************************
*		STUDENT_RECORD				 *
*	Source: Ex: 10.15 (P-356) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>

#define LIMIT 5

struct date {
	int day;
	int month;
	int year;
};

struct student_record {
	char name[20];
	struct date dob;
	int marks;
} data[LIMIT];


int leap(int a);
void getData();
void disp(struct date);
void showData();
void sortData();

int main()
{
	getData();
	sortData();
	showData();

	return 0;
}

void sortData()
{
	int i,j;
	for(i=0;i<LIMIT;i++)
	{
		for(j=0;j<LIMIT;j++)
		{
			if(data[i].marks > data[j].marks)
			{
				struct student_record temp;
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
}


void getData()
{
	int i=0;

	for(i=0;i<LIMIT;i++)
	{
		printf("Enter Detail of Student No. %d \n",i+1);
		printf("Name: ");
		scanf("%s",data[i].name);
		printf("DOB (DD MM YYYY): ");
		scanf("%d %d %d",&data[i].dob.day,&data[i].dob.month,&data[i].dob.year);
		printf("Total Marks: ");
		scanf("%d",&data[i].marks);
	}
}

void disp(struct date a)
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


void showData()
{
	printf("%-10s %-10s %s\n","Rank","Name","DOB");
	int i = 0;
	int rank;
	for(i=0,rank=0;i<LIMIT;i++,rank++)
	{
			printf("%-10d %-10s ",rank,data[i].name);
			disp(data[i].dob);
	}
}
