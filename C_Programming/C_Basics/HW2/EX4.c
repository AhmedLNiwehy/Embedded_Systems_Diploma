/*
 ============================================================================
 Name        : EX4.c
 Author      : Ahmed Mahmoud
 Description : Checking whether a number is +ve or -ve
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sign_check(float num);

int main(void)
{
	float num;

	while(1)
	{
		printf("Enter a number: ");
		fflush(stdin); fflush(stdout);

		scanf("%f",&num);

		sign_check(num);

	}
	return EXIT_SUCCESS;
}

void sign_check(float num)
{
	if(num > 0)
		printf("%f is +ve\n",num);
	else if(num < 0)
		printf("%f is -ve\n",num);
	else
		printf("you entered zero\n");
}
