/*********************************************************
*		BILL					 *
*	Source: Ex: 5.12 (P-150) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#define LEN 25
int main()
{
	char name[LEN],ch;
	int u,i=0;
	float t=0;
	printf("Enter the Name of Consumer: ");
	while((ch = getchar()) != '\n' && i < LEN)
		name[i++] = ch;

	printf("Enter the Units Consumed: ");
	scanf("%d",&u);

	if(u < 200)
		t = u*0.80;

	if(u >=200 && u < 300)
		t = 200*0.80 + (u-200)*0.90;

	if(u >= 300)
		t = 200*0.80 + 100*0.90 + (u-300);

	if(t > 400)
		t += t*0.15;

	printf("******************************\n"
	       "Name: %-25s \n"
	       "Units Consumed: %d\n"
	       "AMT: %.2f \n"
	       "******************************\n",name,u,t);
	return 0;
}
