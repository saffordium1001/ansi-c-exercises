/*********************************************************
*		TRANGLE					 *
*	Source: Ex: 9.10 (P-322) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>

void printAns(float a)
{
	printf("Ans: %.2f \n",a);
}

void doPeri(int a,int b,int c)
{
	printAns(a+b+c);
}

void doArea(int a,int b,int c)
{
	float s = (a+b+c)/2;
	float ans = sqrt((s-a)*(s-b)*(s-c));
	printAns(ans);
}

void doTopDown(int a,int b,int c)
{
	printf("Enter Your Choise: \n"
			"1. Find Perimeter\n2.Find Area\n");

	int choise;
	scanf("%d",&choise);
	switch(choise)
	{
		case 1:doPeri(a,b,c);
			break;
		case 2:doArea(a,b,c);
			break;
		default: printf("Wrong Choise \n");
	}
}

int main()
{
	printf("Enter Three Sides of Triangle: ");
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);

	doTopDown(a,b,c);
	return 0;
}
