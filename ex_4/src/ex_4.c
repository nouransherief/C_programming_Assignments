/*
 ============================================================================
 Name        : ex_4.c
 Date        :12/10/2023
 Author      :Nouran Sherief
 Requirement :product of 2 integers
 Copyright   : Your copyright notice
 Description : ex_4
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float x,y;
	float product;
	printf("Enter 2 numbers:\n");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x, &y);

	product = x*y;


	printf("product: %f", product);

}
