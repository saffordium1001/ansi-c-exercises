/*********************************************************
*		SIZE					 *
*	Source: Ex: 3.12 (P-81) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

int main()
{
	int a = 1;
	char b = 'a';
	char c[] = {"Twymun-Safford"};
	float d = 10.2;
	double e = 100.212;
	long int f= 2332;
	long long int g= 21321;
	long double h= 312;

	printf("Size of Int = %d bytes \n",sizeof(a)); // Can Also use sizeof(int) .. and so on for others
	printf("Size of char = %d bytes\n"
		"Size of char[] = %d bytes\n"
		"Size of float = %d bytes \n"
		"Size of double = %d bytes\n"
		"Size of long int = %d bytes\n"
		"Size of long long int = %d bytes\n"
		"Size of long double = %ld bytes\n",
		sizeof(b),sizeof(c),sizeof(d),sizeof(e),sizeof(f),sizeof(g),sizeof(h));

	return 0;
}
