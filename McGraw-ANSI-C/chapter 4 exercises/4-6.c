/*********************************************************
*		SCANF PRINTF				 *
*	Source: Ex: 4.6 (P-111) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter 3 Int: ");
	scanf("%d %d %d",&a,&b,&c);
	printf("1: %d ",a);
	printf("%d ",b);
	printf("%d\n",c);

	printf("2: %d %d %d \n",a,b,c);

	printf("3: Is it even Possible????\n");

	return 0;
}
