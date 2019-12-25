/*********************************************************
*		VECTOR FUNC				 *
*	Source: Ex: 10.10 (P-356) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

struct vector {
	int arr[100];
	int len;
} a,b;

struct vector makeVector()
{
	struct vector a;
	int i = 0;
	printf("Enter the Elements of vector. -1 to Quit \n");
	scanf("%d",&a.arr[i]);
	while((a.arr[i] != -1)&& i<100)
	{
		scanf("%d",&a.arr[++i]);
	}

	a.len = i;

	return a;
}

void dispVector(struct vector a)
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

struct vector addVector(struct vector a,struct vector b)
{
	struct vector c;
	int i;
	c.len = (a.len > b.len)?b.len:a.len;
	for(i=0;i<c.len;i++)
	{
		c.arr[i] = a.arr[i] + b.arr[i];
	}

	return c;
}

int main()
{
	struct vector a = makeVector();
	struct vector b = makeVector();
	struct vector c = addVector(a,b);
	dispVector(c);
	return 0;
}
