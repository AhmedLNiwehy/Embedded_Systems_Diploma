/*
 ============================================================================
 Name        : EX1.c
 Author      : Ahmed mahmoud
 Description : Printing prime numbers between two numbers.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef enum {
	false,
	true
}bool;

void print_prime(int start , int end);
bool is_prime(int num);

int main(void)
{
	int start , end;

	while(1)
	{
		printf("\nEnter two numbers (intervals): ");
		fflush(stdin); fflush(stdout);
		scanf("%d %d", &start , &end);

		print_prime(start , end);
	}
	return EXIT_SUCCESS;
}

void print_prime(int start , int end)
{
	for(int i = start ; i<=end ; i++)
	{
		if(i < 2)
			continue;

		if(is_prime(i))
			printf("%d   ",i);
	}
}

bool is_prime(int num)
{
	bool flag = true;            //prime by default
	int m = num / 2;

	for(int i=2 ; i<=m ; i++)
	{
		if(num % i == 0)
		{
			flag = false;        //not prime if it has a divisor
			break;
		}
	}
	return flag;
}
