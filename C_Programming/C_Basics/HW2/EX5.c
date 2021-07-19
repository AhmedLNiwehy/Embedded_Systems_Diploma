/*
 ============================================================================
 Name        : EX5.c
 Author      : Ahmed Mahmoud
 Description : Checking whether a character is an alphabet or not.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void alphabet_check(char ch);

int main(void)
{
	char ch;

	while(1)
	{
		printf("Enter a character: ");
		fflush(stdin); fflush(stdout);
		scanf("%c",&ch);
		alphabet_check(ch);
	}
	return EXIT_SUCCESS;
}

void alphabet_check(char ch)
{
	if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
		printf("%c is an alphabet\n",ch);
	else
		printf("%c is not an alphabet\n",ch);
}
