/*
 ============================================================================
 Name        : Arrayprograme.c
 Author      : maneesh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

int array[100],array2[100],num;
int limit,temp[100];


printf("Enter your array size:");

scanf("%d",&limit);

printf("Enter your values:");

for(num=1;num<=limit;num++){
	scanf("%d",&array[num]);


}



printf("Enter your values:");
for(num=1;num<=limit;num++){


	scanf("%d",&array2[num]);

}



printf("Arrays after swapping:");



	for(num=1;num<=limit;num++){

		temp[num]=array[num];
		array[num]=array2[num];

	    array2[num]=temp[num];



}

printf("\narray 1 :");
	for(num=1;num<=limit;num++){

		printf("%d ",array[num]);


	}
	printf("\narray 2 :");
	for(num=1;num<=limit;num++){

			printf("%d ",array2[num]);


		}





	return EXIT_SUCCESS;
}
