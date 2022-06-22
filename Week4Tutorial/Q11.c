// Charles Kos
// 23.06.2022
// z5160675@unsw.edu.au

// STUDENTS IGNORE THIS (it lets Visual Studio run scanf() without an error)
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

#define N 10

void q11(void) {

    int digitCount[N];
    int x, lastDigit;

    while (scanf("%d", &x) == 1) {
        lastDigit = x % N;
        digitCount[lastDigit] = digitCount[lastDigit] + 1;
    }

    lastDigit = 0;
    while (lastDigit < N) {
        printf("%d numbers with last digit %d read\n", digitCount[lastDigit], lastDigit);
        lastDigit = lastDigit + 1;
    }

    ////Fix: initialise all the vairables
    //int digitCount[N];
    //int x, lastDigit;

    //lastDigit = 0;
    //while (lastDigit < N) {
    //    digitCount[lastDigit] = 0;
    //    lastDigit = lastDigit + 1;
    //}

    //while (scanf("%d", &x) == 1) {
    //    lastDigit = x % N;
    //    if (lastDigit < 0) {
    //        lastDigit = -lastDigit;
    //    }
    //    digitCount[lastDigit] = digitCount[lastDigit] + 1;
    //}

    //lastDigit = 0;
    //while (lastDigit < N) {
    //    printf("%d numbers with last digit %d read\n", digitCount[lastDigit], lastDigit);
    //    lastDigit = lastDigit + 1;
    //}


}