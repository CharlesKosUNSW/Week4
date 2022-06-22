// Charles Kos
// 22.06.2022
// z5160675@unsw.edu.au
//Function that finds the factorial of a given integer

// STUDENTS IGNORE THIS (it lets Visual Studio run scanf() without an error)
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

#define MAX_INPUT 45

long long factorial(int number);

void q1(void) {

	// Define variables
	// Which one should we use? Int or long long? What's the difference?
	//int input = 0;
	int input = 0;


	//Get user input
	printf("Enter a number less than %d: ", MAX_INPUT);
	
	//Error checking
	//What if order is swapped around for the logic conditions?

	//Check if input is valid and is between 0 and max input
	if((scanf("%d", &input)) && input >= 0 && input < MAX_INPUT) {
		//If we're here, everything is okay

		printf("%d factorial is %lld\n", input, factorial(input));

		// return EXIT_SUCCESS; //include this if in main function

	} else {
		//Something went wrong if we're here

		printf("Incorrect input\n");
		
		// return EXIT_FAILURE; //include this if in main function
	}

	////Clearer way (for students) of error checking 
	////scanf() returns 0 if unsuccessful and 1 if successful
	//inputFlag = scanf("%d", &input);

	//int inputFlag = 0;
	//if(inputFlag == 0) {
	//	printf("Incorrect input\n");
	//	return;
	//}

}

// Function for calculating factorials
// Note that factorials can get very large, can't handle numbers larger than 44
long long factorial(int number) {
	
	long long result = 1;

	int i = 1;
	while (i <= number) {

		result = result * i;

		i++;
	}

	return result;
}