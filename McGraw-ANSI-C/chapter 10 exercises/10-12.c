/*********************************************************
*		CENSUS					 *
*	Source: Ex: 10.12 (P-356) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>

struct census {
	char city[100];
	long int population;
	float literacy;
} data[5];

void putData();
void sortLit();
void dispData();
void sortPop();
void sortName();
int main()
{
	putData();
	printf("--------------------------------------------\n");
	printf("Orignal Data \n \n");
	dispData();
	printf("--------------------------------------------\n");
	printf("List Sorted Based on Literacy Level \n \n");
	sortLit();
	dispData();
	printf("--------------------------------------------\n");
	printf("List Sorted Based on Population \n \n");
	sortPop();
	dispData();
	printf("--------------------------------------------\n");
	printf("List Sorted Based on Name \n \n");
	sortName();
	dispData();
	printf("--------------------------------------------\n");
	return 0;
}

void sortName()
{
	int i,j= 0;
	for(j=0;j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			if(strcmp(data[i].city,data[j].city) > 0)
			{
				struct census temp;

				strcpy(temp.city,data[i].city);
				temp.population = data[i].population;
				temp.literacy = data[i].literacy;

				strcpy(data[i].city,data[j].city);
				data[i].population = data[j].population;
				data[i].literacy = data[j].literacy;

				strcpy(data[j].city,temp.city);
				data[j].population = temp.population;
				data[j].literacy = temp.literacy;
			}
		}
	}
}

void sortPop()
{
	int i,j= 0;
	for(j=0;j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			if(data[i].population > data[j].population)
			{
				struct census temp;

				strcpy(temp.city,data[i].city);
				temp.population = data[i].population;
				temp.literacy = data[i].literacy;

				strcpy(data[i].city,data[j].city);
				data[i].population = data[j].population;
				data[i].literacy = data[j].literacy;

				strcpy(data[j].city,temp.city);
				data[j].population = temp.population;
				data[j].literacy = temp.literacy;
			}
		}
	}
}

void sortLit()
{
	int i,j= 0;
	for(j=0;j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			if(data[i].literacy > data[j].literacy)
			{
				struct census temp;
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;

				// Alternate:
				/*struct census temp;

				strcpy(temp.city,data[i].city);
				temp.population = data[i].population;
				temp.literacy = data[i].literacy;

				strcpy(data[i].city,data[j].city);
				data[i].population = data[j].population;
				data[i].literacy = data[j].literacy;

				strcpy(data[j].city,temp.city);
				data[j].population = temp.population;
				data[j].literacy = temp.literacy;*/
			}
		}
	}
}

void dispData()
{
	printf("%-12s %-10s   %s \n","City","Population","Literacy");
	int i = 0;
	for(i=0;i<5;i++)
	{
		printf("%-12s %-10ld   %4.2f \n",data[i].city,data[i].population,data[i].literacy);
	}
}

void putData()
{
	char city[5][100] = {"Mumbai","Delhi","Raipur","Chennai","Vizag"};
	long int p[5] = {12234,213123,123214,12421,123134};
	float l[5] = {12.31,13.61,100,0,50.652};

	int i = 0;
	for(i=0;i<5;i++)
	{
		strcpy(data[i].city,city[i]);
		data[i].population = p[i];
		data[i].literacy = l[i];
	}
}
