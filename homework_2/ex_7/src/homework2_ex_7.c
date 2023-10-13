/*
 ============================================================================
 Name        : homework2_ex_7.c
 Date        :12/10/2023
 Author      :Nouran Sherief
 Requirement :factorial of a number
 Copyright   : Your copyright notice
 Description : homework2_ex_7
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,n;
	unsigned long int factorial=1;

again:
	printf("\nEnter an integer:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	if (n<0)
		printf("Erorr!!! Factorial of negative number doesnot exist");
	else
	{
		for(i=1;i<=n;++i)
		{
			factorial*=i;
		}
		printf("factorial=%lu",factorial);
	}
	goto again;

}
