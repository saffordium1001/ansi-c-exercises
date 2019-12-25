/*********************************************************
*		STUDENT DIR				 *
*	Source: Ex: 8.14 (P-269) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //for Exit

#define LIMIT 100
#define LEN 20

int main()
{
	char name[LIMIT][LEN];
	int roll[LIMIT];
	int i=0;
	printf("Enter the Details in format: \n"
		"<Roll No.> <Name>\n"
		"Press 0 to quit \n");

	scanf("%d",&roll[i]);
	while(roll[i] != 0 && i<LIMIT)
	{
		scanf("%s",name[i]);
		scanf("%d",&roll[++i]);
	}
	int len = i;
int choise=0;
int track = 0;
while(1)
{
	printf("\n \n Select A Choise: \n"
		"1. Search Via Roll Number \n"
		"2. Search Via Name \n"
		"0. to quit \n \n");
	scanf("%d",&choise);
	if(choise == 1)
	{
		printf("Enter the Roll Number: ");
		int input;
		scanf("%d",&input);
		track = 0;
		while(input != roll[track] && track++<len);
		if(track<len)
			printf("Name = %s \n",name[track]);
		else
			printf("Sry!! No such Entry!!! \n");
	}
	else if(choise == 2)
	{
		printf("Enter the Name: ");
		char input[LEN];
		scanf("%s",input);
		track = 0;
		while(strcmp(input,name[track]) && track++<len);
		if(track<len)
			printf("Roll = %d \n",roll[track]);
		else
			printf("Sry!! No such Entry!!! \n");
	}
	else if(choise == 0)
	{
		printf("Bye!!! \n");
		exit(0);
	}
	else
		printf("Wrong Input Try Again \n");
}
	return 0;
}
