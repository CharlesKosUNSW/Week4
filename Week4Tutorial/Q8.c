// Charles Kos
// 23.06.2022
// z5160675@unsw.edu.au
//Function that finds the factorial of a given integer

// STUDENTS IGNORE THIS (it lets Visual Studio run scanf() without an error)
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

#define NUM_MAX 10000

void q8(void) {

	int input[NUM_MAX];
	int middleIndex = 0;

	//Read numbers until non-numeric data is entered
	int numRead = 0;
	while (scanf("%d\n", &input[numRead]) == 1 && numRead < NUM_MAX) {
		numRead++;
	}

	//numRead will be 1 extra than however many were entered, so subtract 1
	numRead = numRead - 1;
	middleIndex = numRead/2;

	//Print out the middle number
	printf("The middle number that was entered had an index of %d and a value of %d\n", middleIndex, input[middleIndex]);
}