// Charles Kos
// 23.06.2022
// z5160675@unsw.edu.au

// STUDENTS IGNORE THIS (it lets Visual Studio run scanf() without an error)
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

#define MAX_NUMBERS 100000

//Prototypes
int nonDecreasing(int array[], int length);

void q17(void) {
    int numbers[MAX_NUMBERS];
    int n_numbers, number_read;

    n_numbers = 0;
    number_read = 1;
    while (number_read == 1 && n_numbers < MAX_NUMBERS) {
        number_read = scanf("%d", &numbers[n_numbers]);
        n_numbers = n_numbers + 1;
    }

    if (nonDecreasing(numbers, n_numbers - 1)) {
        printf("The numbers are in non-decreasing order\n");
    }
    else {
        printf("The numbers are not in non-decreasing order\n");
    }
    //return 0;
}

int nonDecreasing(int array[], int length) {
    int i;

    i = 1;
    while (i < length) {
        if (array[i - 1] > array[i]) {
            return 0;
        }
        i = i + 1;
    }

    return 1;
}