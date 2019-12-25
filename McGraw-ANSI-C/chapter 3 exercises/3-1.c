/*********************************************************
*		SWAP X Y Z				 *
*	Source: Ex: 3.1 (P-80) = ANSI-C			 *
**********************************************************/
#include <stdio.h>

int main()
{
	int x,y,z,temp;
	printf("Enter 3 Numbers: ");
	scanf("%d %d %d",&x,&y,&z);
	printf("Before Swap: X=%d Y=%d Z=%d \n",x,y,z);
	temp = x;
	x = y;
	y = z;
	z = temp;
	printf("After Swap: X=%d Y=%d Z=%d \n",x,y,z);


	return 0;
}
