/*********************************************************
*		STRING FUNCTION				 *
*	Source: Ex: 9.15 (P-322) = ANSI-C		 *
**********************************************************/
#include <stdio.h>
#include <string.h>

char str1[1000] = "Hi!!!";
char str2[] = "C is Fun";
char str3[100];

void strcpy_x(char* a,char* b)
{
	int i,len = strlen(b);
	for(i=0;i<len;i++)
		a[i] = b[i];
}

int compStr(char* a,char* b)
{
	int lenA = strlen(a);
	int i,lenB = strlen(b);
	int len = lenA<lenB?lenA:lenB;

	for(i=0;i<len;i++)
	{
		if(a[i] == b[i])
			continue;
		else
		{
			return ((a[i]-'a')-(b[i]-'a'));
		}
	}

	if(i == len)
		return 0;
}

void strAdd(char* a,char* b)
{
	int lenA = strlen(a);
	int lenB = strlen(b);

	int i,j;
	for(j=0,i=lenA;i<lenA+lenB;j++,i++)
	{
		a[i] = b[j];
	}
}

int main()
{
		printf("Str1 = %s \n",str1);
		printf("Copying str1 to str3 \n");
		strcpy_x(str3,str1);
		printf("Str3 = %s \n",str3);
		printf("Comparing str1 and str3 \n");
		int a = compStr(str1,str3);
		printf("Returned Value: %d \n",a);
		printf("Adding str2 to str1 \n");
		strAdd(str1,str2);
		printf("Str1: %s \n",str1);
	return 0;
}
