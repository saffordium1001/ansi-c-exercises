/*********************************************************
*		VEHICLE DETAILS				 *
*	Source: Ex: 8.7 (P-269) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>

#define STRING(x,y) ch[(x)][(y)]

int main()
{
	int i=0,track=0;
	char STRING(10,4)[20];
	printf("Enter the Details in format: \n"
		"<Vehicle Type> <staring mnth> <ending mnth> <price>\n"
		"Press 0 to quit \n");

	scanf("%s",STRING(i,0));
	while(ch[i][0][0] != '0' && i<10)
	{
		scanf("%s %s %s",STRING(i,1),STRING(i,2),STRING(i,3));
		i++;
		scanf("%s",STRING(i,0));
	}

	printf("This Are The Data Entered: \n"
		"Vehicle-Type \t\t Month of Service \tPrice \n");
	for(track=0;track<i;track++)
		printf("%s \t\t\t %s/%s \t\t\t %s \n",STRING(track,0),STRING(track,1),STRING(track,2),STRING(track,3));

	return 0;
}
