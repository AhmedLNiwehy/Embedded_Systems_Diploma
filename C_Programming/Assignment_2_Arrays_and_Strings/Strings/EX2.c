/*
 ============================================================================
 Name        : EX2.c
 Author      : Ahmed Mahmoud
 Description : Finding the length of a string.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned char stringLen(char array[]);

int main(void)
{
	while(1)
	{
		char array[200];
		unsigned char count;

		printf("Enter a string: ");
		fflush(stdin); fflush(stdout);
		gets(array);

		count = stringLen(array);

		printf("Your string contains %d characters \n",count);
	}
	return EXIT_SUCCESS;
}

unsigned char stringLen(char array[])
{
	unsigned char count = 0 , i = 0;

	while(array[i++] != '\0')
		count++;

	return count;
}
