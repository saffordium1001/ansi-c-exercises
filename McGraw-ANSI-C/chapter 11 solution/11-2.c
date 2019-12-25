/*********************************************************
*		QUAD EQN				 *
*	Source: Ex: 11.2 (P-394) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>

#define A *(a)
#define B *(a+1)
#define C *(a+2)

void calcRoot(int*,float*);
void getValue(int* a)
{
	printf("Enter The Coeff. A B C: ");
	scanf("%d %d %d",a,a+1,a+2);
}

int main()
{
	int coeff[3];
	float roots[2];
	getValue(coeff);
	calcRoot(coeff,roots);
	printf("Roots are: %.2f %.2f \n",*(roots),*(roots+1));

	return 0;
}
void calcRoot(int* a,float* roots)
{
	*roots = (-(B) + (sqrt(B*B - 4*A*C)) )/(float)(2 * A);
	*(roots+1) = (-(B) - (sqrt(B*B - 4*A*C)) )/(float)(2 * A);
}
