/*
 ============================================================================
 Name        : homework2_ex_4.c
 Date        :12/10/2023
 Author      :Nouran Sherief
 Requirement :positive or negative
 Copyright   : Your copyright notice
 Description : homework2_ex_4
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float x;
	again:
	printf("\nEnter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);


	if (x<0)
	{
		printf("%f is negative",x);
	}
	else if (x>0)
	{
		printf("%f is positive",x);
	}
	else
	{
		printf("you entered 0");

	}
	goto again;
}
