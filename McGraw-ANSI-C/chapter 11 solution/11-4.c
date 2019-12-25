/*********************************************************
*		MATRIX ADD				 *
*	Source: Ex: 11.4 (P-394) = ANSI-C		 *
**********************************************************/
#include <stdio.h>

#define LIMIT 3

void inputMat(int a[][3]);
void addMat(int a[][3],int b[][3],int c[][3]);
void printMat(int a[][3]);

int main()
{
	int i,j;
	int matA[LIMIT][LIMIT],matB[LIMIT][LIMIT],matC[LIMIT][LIMIT];
	printf("Enter The Value of Matrix A (%dx%d) \n",LIMIT,LIMIT);
	inputMat(matA);
	printf("Enter The Value of Matrix B (%dx%d) \n",LIMIT,LIMIT);
	inputMat(matB);
	addMat(matA,matB,matC);
	printf("ANS: \n");
	printMat(matC);

	return 0;
}

void addMat(int a[][LIMIT],int b[][LIMIT],int c[][LIMIT])
{
	int i,j;
	for(i=0;i<LIMIT;i++)
			for(j=0;j<LIMIT;j++)
				*(*(c+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
}

void inputMat(int matA[][LIMIT])
{
	int i,j;
	for(i=0;i<LIMIT;i++)
			for(j=0;j<LIMIT;j++)
				scanf("%d",(*(matA+i)+j));
}

void printMat(int matA[][LIMIT])
{
	int i,j;
	for(i=0;i<LIMIT;i++)
	{
			for(j=0;j<LIMIT;j++)
				printf("%d ",*(*(matA+i)+j));
			printf("\n");
	}
}
