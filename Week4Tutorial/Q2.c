// Charles Kos
// 22.06.2022
// z5160675@unsw.edu.au
//Function that finds the factorial of a given integer

// STUDENTS IGNORE THIS (it lets Visual Studio run scanf() without an error)
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

// Issue is the return type, we need to give back the reciprocal

double reciprocal(double x);

void q2(void) {

    double x;
    printf("Enter a number ");

    scanf("%lf", &x);
    reciprocal(x);

    printf("The reciprocal is %lf\n", x);
    //return EXIT_SUCCESS;

    printf("The reciprocal is %lf\n", reciprocal(x));
}

double reciprocal(double x) {
    if (x != 0) {
        x = 1.0 / x;
    }

    return x;
}