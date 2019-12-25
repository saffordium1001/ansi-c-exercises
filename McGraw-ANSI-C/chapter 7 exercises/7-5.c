/*********************************************************
*		EXAM RESULT				 *
*	Source: Ex: 7.5 (P-234) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

#define LIMIT 2

int main()
{
	int data[4][LIMIT];
	int i,j;
	for(i=0;i<LIMIT;i++)
	{
		printf("Enter data in form of Roll No. Sub1 Sub2 Sub3 \n");
		for(j=0;j<4;j++)
		{
			scanf("%d",&data[j][i]);
		}
	}
	printf("Total Marks Scored: \n");
	int sum;
	int tmax=0,idmax;
	for(i=0;i<LIMIT;i++)
	{
		sum =0;
		for(j=1;j<4;j++)
		{
			sum += data[j][i];
		}
		if(tmax < sum)
		{
			tmax = sum;
			idmax = i;
		}
		printf("Student %d: %d \n",data[0][i],sum);
	}

	printf("MAX MARKS: \n");
	int id=0;
	int max;
	for(j=1;j<4;j++)
	{
		max = 0;
		printf("Subject %d: \n",j);
		for(i=0;i<LIMIT;i++)
		{
			if(max < data[j][i])
			{
				max = data[j][i];
				id = i;
			}
		}
		printf("Student: %d Marks: %d \n",data[0][id],max);
	}

	printf("Max. Total By Student: %d and Marks: %d \n",data[0][idmax],tmax);
	return 0;
}
