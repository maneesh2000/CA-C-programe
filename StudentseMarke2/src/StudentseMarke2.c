/*
 ============================================================================
 Name        : StudentseMarke2.c
 Author      : maneesh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

     float marke;
	 printf("Enter your marke:");

	 scanf("%f",&marke);

	 if(marke>90){


		 printf("marke:A");
	 }else if(marke>80 &&marke>89){

		 printf("marke:B");






	 }else if(marke>70 && marke>79){

		 printf("markej:C");




	 }else if(marke>60 && marke>69){

		 printf("marke:D");


	 }else if(marke>50 && marke>59){

		 printf("marke:E");


	 }else{


		 printf("Failed");
	 }























	return EXIT_SUCCESS;
}
