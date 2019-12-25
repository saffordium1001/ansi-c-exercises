/*********************************************************
*		EXCHANGE				 *
*	Source: Ex: 9.1 (P-321) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
int x,y;

void swap(void);
int main()
{
	printf("Enter the value of X and Y: ");
	scanf("%d %d",&x,&y);
	printf("Before Swap: A=%d B=%d \n",x,y);
	swap();
	printf("After Swap: A=%d B=%d \n",x,y);
	return 0;
}

void swap(void)
{
	int temp = x;
	x = y;
	y = temp;
}
