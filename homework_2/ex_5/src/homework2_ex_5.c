/*
 ============================================================================
 Name        : homework2_ex_5.c
 Date        :12/10/2023
 Author      :Nouran Sherief
 Requirement :alphapet or not
 Copyright   : Your copyright notice
 Description : homework2_ex_5
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char c;

	again:
	printf("\nEnter a character:\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);


	if ( (c>='a' && c<='z') || (c>='A' && c<='Z') )
		printf("%c is an alphapet",c);

	else
		printf("%c is not an alphapet",c);

	goto again;
}
