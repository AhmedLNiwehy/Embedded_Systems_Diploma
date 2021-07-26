/*
 ============================================================================
 Name        : EX3.c
 Author      : Ahmed mahmoud
 Description : Reversing a sentence using recursion.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void stringRev();

int main(void)
{
	while(1)
	{
		printf("\nEnter a sentence: ");
		fflush(stdin); fflush(stdout);

		stringRev();
	}
	return EXIT_SUCCESS;
}

void stringRev()
{
	int ch;

	ch = getchar();
	if (ch != '\n')
	{
		stringRev();
		putchar(ch);
	}
}