#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

double func (double a){
return (exp(a)-1)/(exp(a)+1);
}

int main() {

    double res = 0.415346, a = 0, b = 3.14/3, e = 0.00001, error;
    double trap,left,right,center,parab;

    printf("**************************\nResult: %lf\n**************************\n",res);

    for(double i = a; i < b; i+=e){
        trap += (e/2)*(func(i)+func(i+e));
        }

    error = 100*fabs(res-trap)/fabs(res);
    printf("Trap:\nResult: %lf, Error %lf%%\n///////////////////////////\n",trap,error);

    for(double i = a; i < b; i+=e){
        left += e*func(i);
        }

    error = 100*fabs(res-left)/fabs(res);
    printf("Rectangle left\nResult: %lf, Error = %lf%%\n///////////////////////////\n",left,error);

    for(double i = a; i < b; i+=e){
        center += e*func(i+e/2);
        }

    error = 100*fabs(res-center)/fabs(res);
    printf("Rectangle center\nResult: %lf, Error = %lf%%\n///////////////////////////\n",center,error);

    for(double i = a; i < b; i+=e){
    right += e*func(i+e);
    }

    error = 100*fabs(res-right)/fabs(res);
    printf("Rectangle right\nResult: %lf, Error = %lf%%\n///////////////////////////\n",right,error);

    for(double i = a; i < b; i+=e)

    parab = 0.5/3*(func(1)+4*func(1.5)+func(2));
    error = 100*fabs(res-parab)/fabs(res);
    printf("Parabola\nResult: %lf, Error = %lf%%\n///////////////////////////\n",parab,error);
}
