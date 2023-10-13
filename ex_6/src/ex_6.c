/*
 ============================================================================
 Name        : ex_6.c
 Date        :12/10/2023
 Author      :Nouran Sherief
 Requirement :swapping 2 values
 Copyright   : Your copyright notice
 Description : ex_6
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float x,y;

	printf("Enter value of a :\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);

	printf("Enter value of b :\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&y);


	printf("After swapping, value of a = %f\n",y);
	printf("After swapping, value of b = %f",x);

}
