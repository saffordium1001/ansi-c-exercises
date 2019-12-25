/*********************************************************
*		FUNC. EVALUTION				 *
*	Source: Ex: 6.14 (P-190) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <math.h>

long long int fact(int n)
{
	long long int sum = 1;
	while(n > 0)
		sum *= n--;

	return sum;
}

float sin_x(int);
float cos_x(int);
float sum_x(void);

int main()
{
	int n;
	printf("Enter A Number: ");
	scanf("%d",&n);
	printf("sin(%d) = %.4f \n",n,sin_x(n));
	printf("cos(%d) = %.4f \n",n,cos_x(n));
	printf("SUM = %.4f \n",sum_x());

	return 0;
}

float sin_x(int x)
{
	float acu = 2,sum=0;
	int i = 1,n=1;
	while(acu > 0.0001 )
	{
		sum += (i*pow(x,n))/(float)fact(n);
		acu = (pow(x,n))/(float)fact(n);
		i = -i;
		n += 2;
	}

	return sum;
}
float cos_x(int x)
{
	float acu = 2,sum=0;
	int i = 1,n=0;
	while(acu > 0.0001 )
	{
		sum += (i*pow(x,n))/(float)fact(n);
		acu = (pow(x,n))/(float)fact(n);
		i = -i;
		n += 2;
	}

	return sum;
}
float sum_x(void)
{
	float acu = 2,sum=0;
	int n=1;
	while(acu > 0.0001 )
	{
		sum += 1/(float)pow(n,n);
		acu = 1/(float)pow(n,n);
		n++;
	}

	return sum;
}
