/*
 ============================================================================
 Name        : EX3.c
 Author      : Ahmed Mahmoud
 Description : Finding the largest number among three numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float largest(float num[]);

int main(void)
{
	float large, num[3];

	printf("Enter Three numbers: ");
	fflush(stdin); fflush(stdout);
	for(int i=0; i<3; i++)
	{
		scanf("%f",&num[i]);
	}
	large = largest(num);
	printf("%f is the largest",large);

	return EXIT_SUCCESS;
}

float largest(float num[])
{
	float large = 0;
	for(int i=0; i<3; i++)
	{
		if(num[i] > large)
			large = num[i];
	}
	return large;
}