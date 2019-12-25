/*********************************************************
*		STUDENT RANGE				 *
*	Source: Ex: 5.4 (P-148) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#define LIMIT 100
int main()
{
	int len=0,n,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;
	printf("Enter the List of Marks (-1 to finish) \n");
	scanf("%d",&n);
	while(n>=0 && len < LIMIT)
	{
		if(n > 80)
			a++;
		if(n > 60)
			b++;
		if(n > 40)
			c++;
		if(n < 40)
			d++;
		if(n > 80 && n <= 100)
			e++;
		if(n > 60 && n <= 80)
			f++;
		if(n > 40 && n<= 60)
			g++;
		if(n <= 40)
			h++;

		printf("Got That!!.. Next \n");
		scanf("%d",&n);
		len++;
	}

	if(len > 0)
	{
		printf("No of Students: %d \n",len);
		printf(" A= %d \n B= %d \n C= %d \n D= %d \n "
			"E= %d \n F= %d \n G= %d \n H= %d \n",a,b,c,d,e,f,g,h);
	}
	return 0;
}
