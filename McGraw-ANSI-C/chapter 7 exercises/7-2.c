/*********************************************************
*		MAX TEMP				 *
*	Source: Ex: 7.2 (P-233) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#define C_LIMIT 10
#define D_LIMIT 31
int main()
{
	float data[C_LIMIT][D_LIMIT];
	int i,j; // i-> City j-> Day
	float high=0,low=1000;
	int h_c=0,h_d=0;
	int l_c=0,l_d=0;
	for(i=0;i<C_LIMIT;i++)
	{
		for(j=0;j<D_LIMIT;j++)
		{
			printf("Enter the Temp. on Day %d of City %d: ",j+1,i+1);
			scanf("%f", &data[i][j]);
			if(data[i][j] > high)
			{
				high = data[i][j];
				h_c = i+1;
				h_d = j+1;
			}
			if(data[i][j] < low)
			{
				low = data[i][j];
				l_c = i+1;
				l_d = j+1;
			}
		}
	}

	printf("MAX: City =%d Day=%d Temp= %.2f \n",h_c,h_d,high);
	printf("MIN: City =%d Day=%d Temp= %.2f \n",l_c,l_d,low);


	return 0;
}
