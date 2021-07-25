/*
 ============================================================================
 Name        : EX2.c
 Author      : Ahmed Mahmoud
 Description : Finding Average using array.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;

	printf("Enter the number of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	float array[num] , sum = 0 , average;

	for(int i=0; i<num; i++)
	{
		printf("Enter element n%d: ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&array[i]);
		sum += array[i];
	}

	average = sum / num;
	printf("The average = %.3f",average);
}