/*
 ============================================================================
 Name        : EX3.c
 Author      : Ahmed Mahmoud
 Description : Reversing a string.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned char stringLen(char array[]);
void stringRev(char array[]);

int main(void)
{

	char array[200];
	unsigned char count;

	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(array);

	stringRev(array);

	return EXIT_SUCCESS;
}

unsigned char stringLen(char array[])
{
	unsigned char count = 0 , i = 0;

	while(array[i++] != '\0')
		count++;

	return count;
}

void stringRev(char array[])
{
	unsigned char i , len , j;
	len = stringLen(array);
	j = len - 1;

	char rev[len];

	for(i=0, j=len-1 ; i<len ; i++)
	{
		rev[i] = array[j--];
	}
	rev[i] = '\0';

	printf("String after reversing: %s",rev);
}
