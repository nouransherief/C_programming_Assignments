/*
 ============================================================================
 Name        : ex_5.c
 Date        :12/10/2023
 Author      :Nouran Sherief
 Requirement :ASCII value
 Copyright   : Your copyright notice
 Description : ex_5
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char x;
printf("Enter a character:\n");
fflush(stdin);fflush(stdout);
scanf("%c",&x);

printf("ASCII value of (%c)is: %d",x,x);
}
