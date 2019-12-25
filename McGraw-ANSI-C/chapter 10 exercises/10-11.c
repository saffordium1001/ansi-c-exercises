/*********************************************************
*		METRIC AND BRITISH			 *
*	Source: Ex: 10.11 (P-356) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

struct metric {
	float meter;
	float cm;
} m;

struct british {
	float feet;
	float inches;
} b;

void getMetric()
{
	printf("Enter Length: M CM \n");
	scanf("%f %f",&m.meter,&m.cm);
}
void getBritish()
{
	printf("Enter Length: FT INCH \n");
	scanf("%f %f",&b.feet,&b.inches);
}

void dispSum()
{
	printf("Sum: %.2f M or %.2f FT \n",m.meter+(12*b.feet),b.feet+(m.meter/12));
	printf("And: %.2f CM or %.2f INCH \n",m.cm+(b.inches/2.5),b.inches+(m.cm*2.5));
}

int main()
{
	getMetric();
	getBritish();
	dispSum();
	return 0;
}
