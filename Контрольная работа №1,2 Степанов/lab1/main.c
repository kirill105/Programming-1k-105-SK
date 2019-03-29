#include <math.h>
#include <stdlib.h>
#include <stdio.h>


//Вариант №39
int main()
{
    double a=1;
    double b=10;
    double x=1;
    double result;
    result=pow(10,a*x)*log(fabs((2-x)/(b+x)));
    printf("%lf", result);
    return 0;
}
