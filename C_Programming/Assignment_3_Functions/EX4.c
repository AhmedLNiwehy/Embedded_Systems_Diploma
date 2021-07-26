/*
 ============================================================================
 Name        : EX4.c
 Author      : Ahmed mahmoud
 Description : Calculating power of number using recursion.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int power(int n , int p);

int main(void)
{
	int n , p , result;

	while(1)
	{
		printf("\nEnter the power operation with formula (n^p): ");
		fflush(stdin);  fflush(stdout);
		scanf("%d^%d", &n ,&p);

		result = power(n , p);

		printf("%d^%d = %d",n , p , result);
	}
	return EXIT_SUCCESS;
}

int power(int n , int p)
{
	while(p > 1)
		return n * power(n , --p);
}
