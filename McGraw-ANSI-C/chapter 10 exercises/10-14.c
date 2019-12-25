/*********************************************************
*		CRICKET					 *
*	Source: Ex: 10.14 (P-356) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>

#define LIMIT 50

struct cricket {
	char pName[40];
	char tName[20];
	float bAvg;
} player[LIMIT];

void getData();
void sortData();
void printData();

int main()
{
	getData();
	sortData();
	printData();

	return 0;
}

void sortData()
{
	int i,j;
	for(i=0;i<LIMIT;i++)
	{
		for(j=0;j<LIMIT;j++)
		{
			if(strcmp(player[i].tName,player[j].tName) < 0)
			{
				struct cricket temp;
				temp = player[i];
				player[i] = player[j];
				player[j] = temp;
			}
		}
	}
}
void printData()
{
		int i = 0;
		char name[20];
		strcpy(name,player[i].tName);
		printf("----------------------------------\n");
		printf("Team: %s \n",name);
		printf("%-25s %s\n","Name","Batting Avg.");
		for(i=0;i<LIMIT;i++)
		{
				if(strcmp(name,player[i].tName) != 0)
				{
							strcpy(name,player[i].tName);
							printf("----------------------------------\n");
							printf("Team: %s \n",name);
							printf("%-25s %s\n","Name","Batting Avg.");
				}
				printf("%-25s %3.2f %s\n",player[i].pName,player[i].bAvg,player[i].tName);
		}
}

void getData()
{
	int i = 0;
	for(i=0;i<LIMIT;i++)
	{
		printf("Enter Detail for Player %d \n",i+1);
		printf("Player Name: ");
		scanf("%s",player[i].pName);
		printf("Team Name: ");
		scanf("%s",player[i].tName);
		printf("Batting Avg: ");
		scanf("%f",&player[i].bAvg);
		printf("\n");
	}
}
