/*
 ============================================================================
 Name        : homework2_ex_3.c
 Date        :12/10/2023
 Author      :Nouran Sherief
 Requirement :max between 3 numbers
 Copyright   : Your copyright notice
 Description : homework2_ex_3
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//Identify variables
	float a,b,c;



	//Get variables from user

	printf("Enter the 3 variables you want to compare between: \n");
	fflush(stdin); fflush(stdout);
	scanf ("%f %f %f", &a, &b, &c);

	// Conditions

	if (a>b)
	{
		if (a>c)

			printf("the largest value is %f",a);

		else
			printf("the largest value is %f",c);
	}
	else
	{
		if (b>c)
			printf("the largest value is %f",b);
		else
			printf("the largest value is %f",c);

	}
}
