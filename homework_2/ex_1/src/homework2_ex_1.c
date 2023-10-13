/*
 ============================================================================
 Name        : homework2_ex_1.c
 Date        :12/10/2023
 Author      :Nouran Sherief
 Requirement :number is even or odd
 Copyright   : Your copyright notice
 Description : homework2_ex_1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x,y;

	printf("Enter an integer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);

	y = x%2;

	if(y ==0)
		printf("%d is even",x);
	else
		printf("%d is odd",x);
}
