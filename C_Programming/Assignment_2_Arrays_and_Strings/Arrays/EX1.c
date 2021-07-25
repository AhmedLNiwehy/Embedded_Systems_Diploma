/*
 ============================================================================
 Name        : EX1.c
 Author      : Ahmed Mahmoud
 Description : Finding the sum of matrix.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float array1[2][2] , array2[2][2] , array3[2][2];

	printf("Enter the elements of the 1st array: ");
	fflush(stdin); fflush(stdout);
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			scanf("%f",&array1[i][j]);
		}
	}

	printf("Enter the elements of the 2nd array: ");
	fflush(stdin); fflush(stdout);
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			scanf("%f",&array2[i][j]);
		}
	}

	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			array3[i][j] = array1[i][j] + array2[i][j];
		}
	}

	printf("sum = \n");

	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			printf("%.3f\t",array3[i][j]);
		}
		printf("\n");
	}
}
