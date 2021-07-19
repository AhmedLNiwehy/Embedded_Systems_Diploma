/*
 ============================================================================
 Name        : EX7.c
 Author      : Ahmed Mahmoud
 Description : Swapping Two Numbers without temp variable
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2;

	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&num1,&num2);
	printf("Numbers before swapping %d  %d\n",num1,num2);
	
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	printf("Numbers after swapping %d  %d\n",num1,num2);

	return EXIT_SUCCESS;
}