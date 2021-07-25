/*
 ============================================================================
 Name        : EX7.c
 Author      : Ahmed Mahmoud
 Description : Finding the factorial of a number.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void factorial(int num);

int main(void)
{
	int num;

	while(1)
	{
		printf("Enter a number: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&num);
		if(num < 0)
			printf("Error! Factorial of a negative number doesn't exist.\n");
		else
			factorial(num);
	}
	return EXIT_SUCCESS;
}

void factorial(int num)
{
	int fact = 1;

	for(int i=num; i>1; i--)
	{
		fact *= i;
	}
	printf("%d! =  %d\n",num,fact);
}
