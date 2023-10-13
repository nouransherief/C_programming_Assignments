/*
 ============================================================================
 Name        : homework2_ex_2.c
 Date        :12/10/2023
 Author      :Nouran Sherief
 Requirement :vowel or consonant
 Copyright   : Your copyright notice
 Description : homework2_ex_2
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char x;

	printf("Enter an Alphapet: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);


	switch (x)
	{
	case ('a'):
	case ('A'):
	case ('e'):
	case ('E'):
	case ('i'):
	case ('I'):
	case ('o'):
	case ('O'):
	case ('u'):
	case ('U'):
	{
		printf("%c is vowel",x);
	}
	break;
	default:
	{
		printf("%c is consonant",x);
	}

	}
}
