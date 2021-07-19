/*
 ============================================================================
 Name        : EX2.c
 Author      : Ahmed Mahmoud
 Description : Print an Integer Entered by a User
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number;

	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	printf("You entered: %d",number);

	return EXIT_SUCCESS;
}