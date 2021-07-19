/*
 ============================================================================
 Name        : EX4.c
 Author      : Ahmed Mahmoud
 Description : Multiplying two Floating Point Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float num1, num2;

	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f%f",&num1,&num2);
	printf("%f * %f = %f",num1,num2,num1*num2);

	return EXIT_SUCCESS;
}