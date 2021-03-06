#include <stdio.h>

#include <stdlib.h>

#include <math.h>



int main()

{

    int N;

    double x, leftX = -3.14, rightX = 3.14;



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



    double a = 2*x*x, S = a;



    for (int n = 1; n <= N; ++n) {

        double q = (2*x*x)/(2*n*n+n);

        a *= q;

        S += a;

    }

    //Calc result

    S = x*sin(2*x);

    double y = x*sin(2*x);

    printf("S=%.7f\n", S);

    printf("y=%.7f\n", y);

    double eps = fabs(y-S)/fabs(S)*100;

    printf("e=%.2f%%\n", eps);



    return 0;

}
