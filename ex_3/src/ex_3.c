/*
 ============================================================================
 Name        : ex_3.c
 Date        :12/10/2023
 Author      :Nouran Sherief
 Requirement :Sum of 2 integers
 Copyright   : Your copyright notice
 Description : ex_3
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x,y;

	printf("Enter two integers:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x, &y);


	printf("Sum:%d",x+y);
}
