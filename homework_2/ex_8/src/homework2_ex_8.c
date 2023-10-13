/*
 ============================================================================ Name        : homework2_ex_7.c
 Name        : homework2_ex_8.c
 Date        :12/10/2023
 Author      :Nouran Sherief
 Requirement :simple calculator
 Copyright   : Your copyright notice
 Description : homework2_ex_8
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char o;
	float a,b;
	again:
	printf("\nChoose operator( + or - or * or / )");
	fflush(stdin);fflush(stdout);
	scanf("%c",&o);

	switch (o)
	{
	case '+':
	{
		printf("Enter two operands:");
		fflush(stdin);fflush(stdout);
		scanf("%f %f",&a,&b);

		printf("%f + %f = %f", a, b, a+b);

	}
	break;



	case '-':
	{
		printf("Enter two operands:");
		fflush(stdin);fflush(stdout);
		scanf("%f %f",&a,&b);

		printf("%f - %f = %f", a, b, a-b);

	}
	break;



	case '*':
	{
		printf("Enter two operands:");
		fflush(stdin);fflush(stdout);
		scanf("%f %f",&a,&b);

		printf("%f * %f = %f", a, b, a*b);

	}
	break;



	case '/':
	{
		printf("Enter two operands:");
		fflush(stdin);fflush(stdout);
		scanf("%f %f",&a,&b);

		printf("%f / %f = %f", a, b, a/b);

	}
	break;
	default:
	{
		printf("error");
	}
	break;
	}
	goto again;
}
