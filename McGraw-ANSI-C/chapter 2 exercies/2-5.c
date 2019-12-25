/*********************************************************
*		LIST PRINTING				 *
*	Source: Ex: 2.5 (P-51) = ANSI-C			 *
**********************************************************/
#include <stdio.h>

int main()
{
	float p_rice = 16.75, p_sugar = 15;
	printf("*** LIST OF ITEMS *** \n");
	printf("Item \t\t Price \n");
	printf("Rice \t\t Rs %.2f \n",p_rice);
	printf("Sugar \t\t Rs %.2f \n",p_sugar);
	return 0;
}
