/*
 ============================================================================
 Name        : PatternPrograme5.c
 Author      : Maneesh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int i,j,limit,space;

		printf("Enter your limit:");
		scanf("%d",&limit);


		for(i=limit;i>=1;i--){


			for(space=1;space<=(limit-i);space++){


				printf(" ");



			}

			for(j=1;j<=2*i-1;j++){


				printf("*");



			}


			printf("\n");





		}







	return EXIT_SUCCESS;
}
