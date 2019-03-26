#include <stdio.h>

#include <stdlib.h>

#include <math.h>



double f1(double);

double f2(double, double);



int main()

{

    double a = -4, b = 4, h = 0.12;



    printf("*************** Part 1 ***************\n");



    printf("x:\t");

    for (double x = a; x <= b; x += h) {

        char c = x + h < b ? '\t' : '\n';

        printf("%.3f%c", x, c);

    }



    printf("y:\t");

    for (double x = a; x <= b; x += h) {

        char c = x + h < b ? '\t' : '\n';

        printf("%.3f%c", x, c);

    }



    printf("**************************************\n");



    printf("*************** Part 2 ***************\n");



    double a1 = 1, b1 = 3, h1 = 0.22;

    double c1 = -4, d1 = -1, h2 = 0.15;

    printf("y\\x\t");

    for (double x = a1; x <= b1; x += h1) {

        char c = x + h1 < b1 ? '\t' : '\n';

        printf("%.3f%c", x, c);

    }



    for (double y = c1; y <= d1; y += h2) {

        printf("%.3f\t", y);

        for (double x = a1; x <= b1; x += h1) {

            char c = x + h1 < b1 ? '\t' : '\n';

            printf("%.3f%c", f2(x, y), c);

        }

    }



    printf("**************************************\n");

    return 0;

}



double f1(double x) {

    if (x <= 0) {

        return sqrt(x)-fabs(x);

    } else {

        if (x > 0 && x < 3.0) {

            return 3*x*cos((2*x)/(x-3));

        } else {

            return (3*x+1)/(x*x-2);

        }

    }

}



double f2(double x, double y) {

    return sqrt(x*fabs(y))-sqrt(x-y);

}
