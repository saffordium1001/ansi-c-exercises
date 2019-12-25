/*********************************************************
*		EXAMS					 *
*	Source: Ex: 5.5 (P-148) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int m,p,c,pass=0;
	printf("Enter Marks of Maths: ");
	scanf("%d",&m);
	printf("Enter Marks of Physics: ");
	scanf("%d",&p);
	printf("Enter Marks of Chemistry: ");
	scanf("%d",&c);

	if(m >= 60)
	{
		if(p >= 50)
		{
			if(c >= 40)
			{
				if(m+p+c >= 200)
					pass = 1;
			}
		}
	}

	if(m+p >= 150)
		pass =1;

	if(pass == 1)
		printf("PASSED \n");
	else
		printf("FAIL \n");
	return 0;
}
