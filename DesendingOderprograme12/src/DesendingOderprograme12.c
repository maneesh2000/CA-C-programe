/*
 ============================================================================
 Name        : DesendingOderprograme12.c
 Author      : maneesh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int limit,i,values[100];

int j,temp;

printf("Enter your limit");
scanf("%d",&limit);
printf("Enter the values of array");

for(i=0;i<limit;i++){


	scanf("%d",&values[i]);

}




for(i=0;i<limit;i++){

	for(j=i+1;j<limit;j++){


if(values[i]>values[j]){


   temp=values[i];
   values[i]=values[j];

   values[j]=temp;
}




}

}

printf(" Sorted array:");
for(i=0;i<limit;i++){

printf("%d\t",values[i]);



}






	return EXIT_SUCCESS;
}
