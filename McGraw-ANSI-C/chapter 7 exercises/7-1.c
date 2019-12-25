/*********************************************************
*		ST. LINE EQN.				 *
*	Source: Ex: 7.1 (P-233) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

float sigma(int arr[],int n);
float sigma_sqr(int arr[],int n);
float sigma_mul(int arr_a[],int arr_b[],int n);

int main()
{
	int n,i;

	printf("Enter the no. of Entries: ");
	scanf("%d",&n);

	int x[n],y[n];

	for(i=0;i<n;i++)
	{
		printf("Enter the X(%d) Y(%d): ",i+1,i+1);
		scanf("%d %d",&x[i],&y[i]);
	}

	printf("Eqn. of The Line is: \n");

	double m = (n*sigma_mul(x,y,n) - sigma(x,n)*sigma(y,n))/((n*sigma_sqr(x,n)) - sigma(x,n)*sigma(x,n));

	double c = (sigma(y,n) - m*(sigma(x,n)))/n;
	printf("y = %.2fx + %.2f \n",m,c);

	return 0;
}
float sigma(int arr[],int n)
{
	float sum=0;
	int i;
	for(i=0;i<n;i++)
		sum += arr[i];
	// printf("SUM A = %.2f \n",sum);
	return sum;
}
float sigma_sqr(int arr[],int n)
{
	float sum=0;
	int i;
	for(i=0;i<n;i++)
		sum += arr[i]*arr[i];
	// printf("SUM B = %.2f \n",sum);

	return sum;
}
float sigma_mul(int arr_a[],int arr_b[],int n)
{
	float sum=0;
	int i;
	for(i=0;i<n;i++)
		sum += (arr_a[i]*arr_b[i]);
	// printf("SUM C = %.2f \n",sum);

	return sum;
}
