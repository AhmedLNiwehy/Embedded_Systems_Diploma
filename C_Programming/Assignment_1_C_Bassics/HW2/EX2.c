/*
 ============================================================================
 Name        : EX2.c
 Author      : Ahmed Mahmoud
 Description : Checking whether a character is Vowel or consonant
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void check_vowel_consonant(char ch);

int main(void)
{
	char ch;

	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);
	check_vowel_consonant(ch);

	return EXIT_SUCCESS;
}

void check_vowel_consonant(char ch)
{
	if(ch == 'a' || ch == 'o' || ch == 'u' || ch == 'i' || ch == 'e'|| \
       ch == 'A' || ch == 'O' || ch == 'U' || ch == 'I' || ch == 'E')
		printf("%c is Vowel \n",ch);
	else
		printf("%c is Consonant\n",ch);
}
