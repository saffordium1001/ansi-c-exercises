/*********************************************************
*		HOTEL					 *
*	Source: Ex: 10.13 (P-356) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct hotel {
	char name[20];
	char address[100];
	char grade;
	float charge;
	int rooms;
} data[5];

void dispDataByGrd(char grade);
void dispDataByCrg(float);
void putData();
void sortData();

int main()
{
	char grade;
	float charge;
	putData();
	sortData();
	printf("Enter The Grade of the Hotel: ");
	scanf("%c",&grade);
	dispDataByGrd(toupper(grade));
	printf("Enter The Max Charge of the Hotel: ");
	scanf("%f",&charge);
	dispDataByCrg(charge);

	return 0;
}

void sortData()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(data[i].charge < data[j].charge)
			{
				struct hotel temp;
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
}

void dispDataByCrg(float maxChrg)
{
	printf("%-10s %-20s %-5s   %-7s   %s\n","Name","Address","Grade","Charges","Rooms");
	int i = 0;
	for(i=0;i<5;i++)
	{
		if(data[i].charge <= maxChrg)
			printf("%-10s %-20s %-5c   %-7.2f   %4d\n",data[i].name,data[i].address,data[i].grade,data[i].charge,data[i].rooms);
	}
}

void dispDataByGrd(char grade)
{
	printf("%-10s %-20s %-5s   %-7s   %s\n","Name","Address","Grade","Charges","Rooms");
	int i = 0;
	for(i=0;i<5;i++)
	{
		if(grade == data[i].grade)
			printf("%-10s %-20s %-5c   %-7.2f   %4d\n",data[i].name,data[i].address,data[i].grade,data[i].charge,data[i].rooms);
	}
}

void putData()
{
	char name[5][20] = {"Xooas","Ramap","Qiaosa","Uyasad","Cjnasdow"};
	char address[5][100] = {"5171-adsa","jsajsbdu-121","171782hhsad","88sdoad","asffassa"};
	char grade[5] = {'A','C','D','E','D'};
	float charge[5] = {122.21,500.13,6001.42,544,250.25};
	int rooms[5] = {1,2,3,2,4};

	int i = 0;
	for(i=0;i<5;i++)
	{
		strcpy(data[i].name,name[i]);
		strcpy(data[i].address,address[i]);
		data[i].grade = grade[i];
		data[i].charge = charge[i];
		data[i].rooms = rooms[i];
	}
}
