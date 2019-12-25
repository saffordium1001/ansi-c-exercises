/*********************************************************
*		STUDENT LIST				 *
*	Source: Ex: 8.10 (P-269) = ANSI-C		 *
**********************************************************/

//Requires Knowledge of Structures..
//Using Just Strings will be much more complicated...
#include <stdio.h>
#include <string.h>

#define LIMIT 100

struct details {
	int roll;
	int marks;
	char name[20];
};

int main()
{
	int i=0,j;
	struct details students[LIMIT];
	printf("Enter the Details in format: \n"
		"<Roll No.> <Name> <Marks>\n"
		"Press 0 to quit \n");

	scanf("%d",&students[0].roll);
	while(students[i].roll != 0 && i<LIMIT)
	{
		scanf("%s %d",students[i].name,&students[i].marks);
		i++;
		scanf("%d",&students[i].roll);
	}
	int len = i;
	struct details temp;
	int data[i];
		printf("Part A: Sorting Via Roll No: \n");
	for(i=0;i<len;i++)
			data[i] = i;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
			{
				if(students[i].roll < students[j].roll)
				{
				 	temp = students[i];
					students[i] = students[j];
					students[j] = temp;
				}
			}
	}
	printf("Roll No. \t %-20s \t Marks \n","Name");
	for(i=0;i<len;i++)
		printf("%d \t\t %-20s \t %d\n",students[data[i]].roll,students[data[i]].name,students[data[i]].marks);

	printf("Part B: Sorting Via Marks: \n");
	for(i=0;i<len;i++)
			data[i] = i;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
			{
				if(students[i].marks < students[j].marks)
				{
					temp = students[i];
					students[i] = students[j];
					students[j] = temp;
				}
			}
	}
	printf("Roll No. \t %-20s \t Marks \n","Name");
	for(i=0;i<len;i++)
		printf("%d \t\t %-20s \t %d\n",students[data[i]].roll,students[data[i]].name,students[data[i]].marks);

	printf("Part C: Sorting Via Name: \n");
	for(i=0;i<len;i++)
			data[i] = i;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
			{
				if(strcmp(students[i].name,students[j].name) < 0)
				{
					temp = students[i];
					students[i] = students[j];
					students[j] = temp;
				}
			}
	}
	printf("Roll No. \t %-20s \t Marks \n","Name");
	for(i=0;i<len;i++)
		printf("%d \t\t %-20s \t %d\n",students[data[i]].roll,students[data[i]].name,students[data[i]].marks);

	return 0;
}
