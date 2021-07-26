/*
 ============================================================================
 Name        : EX2.c
 Author      : Ahmed mahmoud
 Description : Calculating factorial of number using recursion.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned long long factorial(int num);

int main(void)
{
	int num;
	unsigned long long result;

	while(1)
	{
		printf("Enter a number : ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &num);

		if(num < 0)
			printf("Enter a +ve number \n");
		else
		{
			result = factorial(num);
			printf("factorial of %d = %llu \n", num , result);
		}
	}
	return EXIT_SUCCESS;
}

unsigned long long factorial(int num)
{
	if(num < 1)
		return 1;
	else
		return num * factorial(num - 1);

}
