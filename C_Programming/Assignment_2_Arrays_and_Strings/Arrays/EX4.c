/*
 ============================================================================
 Name        : EX4.c
 Author      : Ahmed Mahmoud
 Description : Inserting an element in an array.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
	float arr[100] , new;
	int num , location;

	printf("Enter the number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("Enter the elements: ");
	fflush(stdin); fflush(stdout);
	for(int i=0 ; i<num ; i++)
	{
		scanf("%f",&arr[i]);
	}

	printf("Enter the element to be inserted: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&new);

	printf("Enter the location: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&location);

	for(int i=0 ; i<num ; i++)
	{
		if(i == (location - 1))
		{
			printf("%.3f\t",new);
			printf("%.3f\t",arr[i]);
		}

		else
			printf("%.3f\t",arr[i]);
	}
}