/*********************************************************
*		VECTOR					 *
*	Source: Ex: 10.9 (P-356) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

struct vector {
	int arr[100];
	int len;
} a;

void makeVector()
{
	int i = 0;
	printf("Enter the Elements of vector. -1 to Quit \n");
	scanf("%d",&a.arr[i]);
	while((a.arr[i] != -1)&& i<100)
	{
		scanf("%d",&a.arr[++i]);
	}

	a.len = i;
}

void dispVector()
{
	int i;
	for(i=0;i<a.len;i++)
		printf("%d, ",a.arr[i]);
	printf("\n");
}

void mulVector(int num)
{
	int i;
	for(i=0;i<a.len;i++)
		a.arr[i] *= num;
}

void modVector(int index,int num)
{
	a.arr[index-1] = num;
}

int main()
{
	makeVector();
	dispVector();
	modVector(1,4);
	dispVector();
	mulVector(12);
	dispVector();

	return 0;
}
