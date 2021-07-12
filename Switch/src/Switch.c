/*
 ============================================================================
 Name        : Switch.c
 Author      : maneesh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int choise;

	printf(" 1 is Sunday\n 2 is Monday\n 3 is Tuesday\n 4is Wednesday \n 5 is Thursday\n 6 is Friday\n 7 is Saturday \n");


	printf("Enter your choise:\n");

	scanf("%d",&choise);


	switch(choise){



	case 1:

		printf("Sunday");


        break;
	case 2:

		printf("monday");

           break;
	case 3:


		printf("Tuesday");

		break;

	case 4:

		printf("Wednesday");

		break;

	case 5:

		printf("Thursday");

		break;


	case 6 :


		printf ("Friday");

		break;


	case 7:

		printf("Saturday");

		break;



	default:

		printf("faile !!!");











	}





	return EXIT_SUCCESS;
}
