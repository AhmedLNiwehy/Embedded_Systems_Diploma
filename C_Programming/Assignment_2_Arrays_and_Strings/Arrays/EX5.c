/*
 ============================================================================
 Name        : EX5.c
 Author      : Ahmed Mahmoud
 Description : Searching for an element in an array.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num ;

	printf("Enter the number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	float arr[num] , var;

	printf("Enter the elements: ");
	fflush(stdin); fflush(stdout);
	for(int i=0 ; i<num ; i++)
	{
		scanf("%f",&arr[i]);
	}

	while(1)
	{

		printf("Enter the element to be searched: ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&var);

		int i;
		for(i=0 ; i<num ; i++)
		{
			if(var == arr[i])
				break;
		}

		if(i < num)
			printf("number found at the location: %d \n",i+1);
		else
			printf("The number not found\n");
	}
}
