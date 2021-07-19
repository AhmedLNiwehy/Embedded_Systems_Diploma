/*
 ============================================================================
 Name        : EX5.c
 Author      : Ahmed Mahmoud
 Description : Finding ASCII Value of a Character
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch;

	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);

	printf("ASCII value of %c = %d\n",ch,ch);

	return EXIT_SUCCESS;
}

