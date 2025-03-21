#include <stdio.h>
#include <math.h>
#include "prime.h"


// CSCN71020 - 25W - Assignment #3 - Jason Safari Little


int isPrime(int number) {

	// Check if the number is negative
	if (number < 0) {
	
		printf("Please Enter A POSITIVE Number\n");
		return 0;
	}

	// Check if the number is 1
	if (number == 1) {

		printf("%i Is Not Prime Number\n", number);
		return 0;
	}

	// Check if the number is 2
	if (number == 2) {

		printf("%i Is A Prime Number\n", number);
		return 1;

	}

	// Check if the number is even
	if (number % 2 == 0) {
	
		printf("%i Is Not A Prime Number\n", number);
		return 0;

	}


	int squareOf = sqrt(number);

	// Goes through all the numbers from the squareroot and 
	// If it doesn't get a reminder it has to not be a prime number
	for (int i = 3; i <= squareOf; i += 2) {  
		if (number % i == 0) {
			printf("%d is NOT a Prime Number\n", number);
			return 0;
		}

	}

	// If the number goes through all this is statements it 
	// Has to be a Prime number.
	printf("%i Is A Prime A Number\n", number);
	return 1;

}