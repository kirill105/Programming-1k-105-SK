#include <stdio.h>

#include <stdlib.h>

#include <math.h>


//Вариант №38
int main()

{

    int N;

    double x, leftX = 0, rightX = 2;



    printf("Enter x, N: ");

    if (scanf("%lf %d", &x, &N) != 2) {

        printf("Invalid input\n");

        return -1;

    }



    if (x < leftX || x > rightX) {

        char* fmt = "Incorrect %.4f. Need from [%.4f, %.4f]\n";

        printf(fmt, x, leftX, rightX);

        return -1;

    }



    double a = x, S = a;



    for (int n = 1; n <= N; ++n) {

        double q = x;

        a *= q;

        S += a;

    }



    S = x/(1-x*x);

    double y = x/(1-x*x);

    printf("S=%.7f\n", S);

    printf("y=%.7f\n", y);

    double eps = fabs(y-S)/fabs(S)*100;

    printf("e=%.2f%%\n", eps);



    return 0;

}
