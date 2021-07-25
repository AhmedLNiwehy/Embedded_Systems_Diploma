/*
 ============================================================================
 Name        : EX1.c
 Author      : Ahmed Mahmoud
 Description : Finding the frequency of characters in a string.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	while(1)
	{
		char array[200] , ch;
		unsigned char count=0;
		printf("Enter a string: ");
		fflush(stdin); fflush(stdout);
		gets(array);

		printf("Enter a character to be searched: ");
		fflush(stdin); fflush(stdout);
		scanf("%c",&ch);

		for(int i=0 ; i<strlen(array) ; i++)
		{
			if(array[i] == ch)
				count++;
		}
		printf("%c is reapeted %d times: \n\n", ch , count );
	}
	return EXIT_SUCCESS;
}
