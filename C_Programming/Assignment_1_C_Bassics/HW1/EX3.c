/*
 ============================================================================
 Name        : EX3.c
 Author      : Ahmed Mahmoud
 Description : Adding Two Integers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2;

	printf("Enter two integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&num1,&num2);
	printf("%d + %d = %d",num1,num2,num1+num2);

	return EXIT_SUCCESS;
}