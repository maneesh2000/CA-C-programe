/*
 ============================================================================
 Name        : arrayfuntion16.c
 Author      : maneesh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void getArray(int arr[], int n);
void displayArray(int arr[], int n);




int main() {
    int myarray[5];
    int array_size = 5;

    getArray(myarray, array_size);
    displayArray(myarray, array_size);

    return 0;
}

void getArray(int arr[], int n)
{



    for(int i=0; i<n; i++)  {
        scanf("%d", &arr[i]);
    }




        }




void displayArray(int arr[], int n)
{
    for(int i=0; i<n; i++)  {
        printf("%d ", arr[i]);   // note the space after %d
    }
    printf("\n");
}

