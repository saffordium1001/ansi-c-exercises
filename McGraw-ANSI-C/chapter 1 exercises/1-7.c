/*********************************************************
*		USING FUNCTIONS 			 *
*	Source: Ex: 1.7 (P-20) = ANSI-C			 *
**********************************************************/
#include <stdio.h>
int add(int a,int b);
int sub(int a,int b);
int main()
{
	int a = 20,b = 10;
	printf(" %d + %d = %d \n %d - %d = %d \n",a,b,add(a,b),a,b,sub(a,b));

	return 0;
}

int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
