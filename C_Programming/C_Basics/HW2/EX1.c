/*
 ============================================================================
 Name        : EX1.c
 Author      : Ahmed Mahmoud
 Description : Checking whether a number is Even or Odd
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void check_even_odd(int num);

int main(void)
{
	int num;

	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	check_even_odd(num);

	return EXIT_SUCCESS;
}

void check_even_odd(int num)
{
	if(num % 2 == 0)
		printf("%d is even \n",num);
	else
		printf("%d is odd\n",num);
}
