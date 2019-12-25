/*********************************************************
*		COST IN WORDS				 *
*	Source: Ex: 8.9 (P-269) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>

int num[6];

void simple(int n,int a);
void complex(int n,int a);

int main()
{
	int i=0,index=0;
	char input,ch[6];
	printf("Enter the number in format <XXXR.PP> \n");
	while((input = getchar()) != '\n')
		if(input != '.')
			ch[i++] = input;

	int len = strlen(ch);
	while(len != 6)
	{
		num[index++] = 0;
		len++;
	}
	for(i=0;index<len;index++,i++)
		num[index] = ch[i] - '0';


	for(i=0;i<6;i++)
	{
		if(i < 2 && num[i] != 0)
			simple(num[i],i);
		if(i == 2 || i == 4)
		{
			if(num[i] == 1)
				complex(1,num[i+1]);
			else
			{
				complex(num[i],0);
				simple(num[i+1],10);
			}
		}
		if(i == 3)
			simple(0,3);
	}

	printf("\n");

	return 0;
}

void simple(int n,int a)
{
		switch(n)
	{
		case 1: printf("ONE ");
			break;
		case 2: printf("TWO ");
			break;
		case 3: printf("THREE ");
			break;
		case 4: printf("FOUR ");
			break;
		case 5: printf("FIVE ");
			break;
		case 6: printf("SIX ");
			break;
		case 7: printf("SEVEN ");
			break;
		case 8: printf("EIGHT ");
			break;
		case 9: printf("NINE ");
			break;
	}

	switch(a)
	{
		case 0: printf("THOUSAND ");
			break;
		case 1: printf("HUNDRED ");
			break;
		case 3: printf("AND PAISE ");
			break;
	}

}

void complex(int n,int a)
{
	if(n == 1)
	{
		switch(a)
		{
			case 1: printf("ELEVEN ");
				break;
			case 2: printf("TWELVE ");
				break;
			case 3: printf("THIRTEEN ");
				break;
			case 4: printf("FOURTEEN ");
				break;
			case 5: printf("FIFTEEN ");
				break;
			case 6: printf("SIXTEEN ");
				break;
			case 7: printf("SEVENTEEN ");
				break;
			case 8: printf("EIGHTEEN ");
				break;
			case 9: printf("NINETEEN ");
				break;
		}
		return;
	}
	switch(n)
	{
		case 2: printf("TWENTY ");
			break;
		case 3: printf("THIRTY ");
			break;
		case 4: printf("FOURTY ");
			break;
		case 5: printf("FIFTY ");
			break;
		case 6: printf("SIXTY ");
			break;
		case 7: printf("SEVENTY ");
			break;
		case 8: printf("EIGHTY ");
			break;
		case 9: printf("NINETY ");
			break;
	}
}
