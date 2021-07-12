/*
 ============================================================================
 Name        : Multiplication.c
 Author      : maneesh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int number, num;
  printf("Enter an integer: ");
  scanf("%d", &number);
  for (num =1; num <= 10; num++) {
    printf("%d * %d = %d \n", num,number,number * num);
  }
  return 0;

}
