/*
 ============================================================================
 Name        : patternPrograme.c
 Author      : maneesh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int row,gride,i;
	printf("Enter your rowse:");

	scanf("%d",&row);
	for(i=1;i<=row;i++){

		for(gride=1;gride<=i;gride++){

		printf("%d ", gride);



		}




printf("\n");





	}








	return EXIT_SUCCESS;
}
