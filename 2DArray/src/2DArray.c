/*
 ============================================================================
 Name        : 2DArray.c
 Author      : maneesh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	  int  limit, a[100][100], b[100][100], sum[100][100], i, j;




	  printf("enter your array size:");

	  scanf("%d",&limit);

	  printf("Enter your value of array");
	  for (i = 0; i < limit; ++i)
	    for (j = 0; j < limit; ++j) {
	      printf(" a%d%d: ", i + 1, j + 1);
	      scanf("%d", &a[i][j]);
	    }

	  printf("Enter your value of array2:\n");
	  for (i = 0; i < limit; ++i)
	    for (j = 0; j < limit; ++j) {
	      printf(" b%d%d: ", i + 1, j + 1);
	      scanf("%d", &b[i][j]);
	    }

	  // adding two matrices
	  for (i = 0; i < limit; ++i)
	    for (j = 0; j < limit; ++j) {
	      sum[i][j] = a[i][j] + b[i][j];
	    }

	  // printing the result
	  printf("\nSum of tw0 arrays: \n");
	  for (i = 0; i < limit; ++i)
	    for (j = 0; j < limit; ++j) {
	      printf("%d   ", sum[i][j]);
	      if (j == limit - 1) {
	        printf("\n\n");
	      }
	    }









	return EXIT_SUCCESS;
}
