/*********************************************************
*		TRIGNOMERTY				 *
*	Source: Ex: 5.15 (P-150) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
	float t;
	char a = 'a';
	printf("Enter the Vaule of Radian: ");
	scanf("%f",&t);
	printf("Enter the Trignometric Function to be performed: ");
	scanf("%s",&a);
	a = tolower(a);

	printf("Part 1: \n");
	if(a == 's')
		printf("sin(%.2f) = %.2f \n",t,sin(t));
	else if(a == 'c')
		printf("cos(%.2f) = %.2f \n",t,cos(t));
	else
		printf("Wrong Input \n");

	printf("Part 2: \n");
	switch(a)
	{
	case 's': printf("sin(%.2f) = %.2f \n",t,sin(t));
		  break;
	case 'c': printf("cos(%.2f) = %.2f \n",t,cos(t));
		  break;
	default : printf("Wrong Input \n");
		  break;
	}
	return 0;
}
