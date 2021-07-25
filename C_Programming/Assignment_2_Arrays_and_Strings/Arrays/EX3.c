/*
 ============================================================================
 Name        : EX3.c
 Author      : Ahmed Mahmoud
 Description : Finding transpose of a matrix.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int row , colm;

	printf("Enter the number of rows and column: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &row , &colm);

	float array[row][colm];
	printf("Enter the elements of the matrix: \n");

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<colm; j++)
		{
			printf("Enter element a%d%d: ", i+1 , j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&array[i][j]);
		}
	}

	printf("The entered matrix: \n");
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<colm; j++)
		{
			printf("%.2f\t",array[i][j]);
		}
		printf("\n");
	}

	printf("The transpose of matrix: \n");
	for(int i=0; i<colm; i++)
	{
		for(int j=0; j<row; j++)
		{
			printf("%.2f\t",array[j][i]);
		}
		printf("\n");
	}
}
