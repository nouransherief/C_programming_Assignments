/*
 ============================================================================
 Name        : homework2_ex_6.c
 Date        :12/10/2023
 Author      :Nouran Sherief
 Requirement :sum of natural numbers
 Copyright   : Your copyright notice
 Description : homework2_ex_6
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,n;
	int sum=0;


	printf("Enter an integer:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);


	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum=%d",sum);
}
