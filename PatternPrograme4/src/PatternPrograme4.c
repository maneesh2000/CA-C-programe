/*
 ============================================================================
 Name        : PatternPrograme4.c
 Author      : maneesh
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


	for(i=1;i<=limit;i++){


		for(space=1;space<=(limit-i);space++){


			printf(" ");



		}

		for(j=1;j<=i;j++){


			printf("* ");



		}


		printf("\n");





	}










	return EXIT_SUCCESS;
}
