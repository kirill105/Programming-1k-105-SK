#include <math.h>
#include <stdlib.h>
#include <stdio.h>



int main()
{
    int a=6.13;
    int b=9.03;
    int x=9.12;
    double result;
    result=(a-2*x)/
    (sqrt(x*cos(7*x)+(b*sin(1/x))));
    printf("%f", result);
    return 0;
}
