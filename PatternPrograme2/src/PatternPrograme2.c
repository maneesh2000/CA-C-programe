/*
 ============================================================================
 Name        : PatternPrograme2.c
 Author      : maneesh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {




	int j,i,row,number=1 ;

	printf("Enter the limit:");

	scanf("%d",&row);

	for(i=1;i<=row;i++){



		for(j=1;j<=i;j++){

			printf(" %d",number);

			number++;




		}



      printf("\n");

		}









	return EXIT_SUCCESS;
}
