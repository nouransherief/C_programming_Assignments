/*
 ============================================================================
 Name        : ex_2.c
 Date        :12/10/2023
 Author      :Nouran Sherief
 Requirement :display the integer the user enters
 Copyright   : Your copyright notice
 Description : ex_2
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;

	printf("Enter an Integer:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d", &x);


	printf("You entered: %d",x);
}
