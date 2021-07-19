/*
 ============================================================================
 Name        : EX6.c
 Author      : Ahmed Mahmoud
 Description : Swapping Two Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int *num1, int *num2);

int main(void)
{
	int num1, num2;

	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&num1,&num2);
	printf("Numbers before swapping %d  %d\n",num1,num2);
	swap(&num1 , &num2);
	printf("Numbers after swapping %d  %d\n",num1,num2);

	return EXIT_SUCCESS;
}

void swap(int *num1, int *num2)
{
	int temp = *num2;
	*num2 = *num1;
	*num1 = temp;
}
