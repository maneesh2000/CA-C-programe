/*
 ============================================================================
 Name        : patternProgram.c
 Author      : maneesh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,j,row;


    printf("Enter your row :");
    scanf("%d",&row);

    for(i=1;i<=row;i++){

    	for(j=1;j<=i;j++){


    printf("%d",i);
    	}


    	printf("\n");


    }
	return EXIT_SUCCESS;
}
