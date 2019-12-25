/*********************************************************
*		CALCULATOR				 *
*	Source: Ex: 9.9 (P-322) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

void printAns(float a)
{
	printf("Ans: %.2f \n",a);
}

void doAdd(int a,int b)
{
	printAns(a+b);
}

void doSub(int a,int b)
{
	printAns(a-b);
}

void doMult(int a,int b)
{
	printAns(a*b);
}

void doDiv(int a,int b)
{
	printAns(a/(float)b);
}

void doTopDown(int a,int b)
{
	printf("Enter Your Choise: \n"
			"1. Add\t 2.Subtract\t 3.Multiply\t4.Divide \n");

	int choise;
	scanf("%d",&choise);
	switch(choise)
	{
		case 1:doAdd(a,b);
			break;
		case 2:doSub(a,b);
			break;
		case 3:doMult(a,b);
			break;
		case 4:doDiv(a,b);
			break;
		default: printf("Wrong Choise \n");
	}
}

int main()
{
	printf("Enter Two Numbers: ");
	int a,b;
	scanf("%d %d",&a,&b);

	doTopDown(a,b);
	return 0;
}
