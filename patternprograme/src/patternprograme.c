/*
 ============================================================================
 Name        : patternprograme.c
 Author      : maneesh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i,j,k,l,n;
	printf(“Enter the number of rows : “);
	scanf(“%d”,&n);
	for(i = 1; i <= n; i++)
	{
	for(k = 1; k <= i; k++)
	{
	printf(“%d “,k);
	}
	for(l = i+1; l <= 1; l++)
	{
	printf(“%d “,l);
	}
	printf(“\n”);
	}



	return EXIT_SUCCESS;
}
