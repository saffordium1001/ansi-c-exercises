/*********************************************************
*		MERGE ARRAY				 *
*	Source: Ex: 7.6 (P-234) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

#define LIMIT 2

int main()
{
	int a[LIMIT+1],b[LIMIT+1],c[2*LIMIT];
	a[LIMIT] = b[LIMIT] = 10000;
	int ia=0,ib=0; //ix -> Index of X
	int i,j,max=0;
	printf("Enter %d Elements for Array %d: ",LIMIT,1);
	for(j=0;j<LIMIT;j++)
		scanf("%d",&a[j]);
	printf("Enter %d Elements for Array %d: ",LIMIT,2);
	for(j=0;j<LIMIT;j++)
		scanf("%d",&b[j]);

	for(i=0;i<2*LIMIT;i++)
	{
		if(a[ia] < b[ib])
			c[i] = a[ia++];
		else
			c[i] = b[ib++];
		printf("C[%d] = %d \n",i,c[i]);
	}
	printf("Merged LIST: ");
	for(i=0;i<2*LIMIT;i++)
		printf("%d ",c[i]);
	printf(" \n");
	return 0;
}
