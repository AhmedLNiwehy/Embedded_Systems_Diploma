/*
 ============================================================================
 Name        : EX8.c
 Author      : Ahmed Mahmoud
 Description : Simple calculator.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void calculate(float num1, float num2, char op);

int main(void)
{
	float num1, num2;
	char op;

	while(1)
	{
		printf("Enter an operator either + , - , * , or / : ");
		fflush(stdin); fflush(stdout);
		scanf("%c",&op);
		printf("Enter two operands: ");
		fflush(stdin); fflush(stdout);
		scanf("%f%f",&num1,&num2);
		calculate(num1, num2, op);
	}
	return EXIT_SUCCESS;
}

void calculate(float num1, float num2, char op)
{
	switch(op)
	{
	case'+': printf("%f %c %f = %f\n",num1,op,num1,num1+num2);
	break;
	case'-': printf("%f %c %f = %f\n",num1,op,num1,num1-num2);
	break;
	case'*': printf("%f %c %f = %f\n",num1,op,num1,num1*num2);
	break;
	case'/': printf("%f %c %f = %f\n",num1,op,num1,num1/num2);
	break;
	default: printf("Invalid operator\n");
	}
}
