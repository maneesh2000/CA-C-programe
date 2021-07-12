/*
 ============================================================================
 Name        : Datatipe2.c
 Author      : maneesh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	  int P;
	    float R,n,SI;
		printf("Enter principle amount:\n");
	scanf ("%d",&P);




		printf("Enter Interest rate:\n");

	scanf ("%f",&R);



		printf("Enter Number of year:\n");

		scanf ("%f",&n);


		    SI=(P*R*n)/100;

		printf("your result:%.2f",SI);



	return EXIT_SUCCESS;
}
