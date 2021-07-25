/*
 ============================================================================
 Name        : EX6.c
 Author      : Ahmed Mahmoud
 Description : Calculating the sum of natural numbers.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum(int num);

int main(void)
{
	int num, result;

	while(1)
	{
		printf("Enter a number: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&num);
		result = sum(num);
		printf("sum = %d\n",result);
	}
	return EXIT_SUCCESS;
}

int sum(int num)
{
	int sum = 0;
	for(int i=0; i<= num; i++)
	{
		sum += i;
	}
	return sum;
}
