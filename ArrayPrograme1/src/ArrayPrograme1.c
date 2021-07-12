/*
 ============================================================================
 Name        : ArrayPrograme1.c
 Author      : maneesh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int limit,array[100];
	int num,sum;


	printf("Enter Your array size:");

	scanf("%d",&limit);


	for(num=1;num<=limit;num++){


     scanf("%d",&array[num]);



	}


	for(num=1;num<limit;num++){


		if(array[num]%2==0){

           sum=sum+1;



	}

	}

		printf("Number of even numbers in the given array is %d",sum);

	return EXIT_SUCCESS;

	}

