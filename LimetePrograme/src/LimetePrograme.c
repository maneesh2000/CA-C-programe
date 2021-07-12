/*
 ============================================================================
 Name        : LimetePrograme.c
 Author      : maneesh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number,i;
	int sum=0;
	printf("enter your limit:");

	scanf("%d",&number);

	for (i=0;i<number;i++){
			if(i%2!=0){
				sum=sum+i;


						}
	}
	   printf("%d\n",sum);





	return 0;
}
