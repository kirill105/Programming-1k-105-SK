#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    const R=1 ;
    double x,y,d1,d2 ;
    printf ("Enter x,y:");
    scanf("%lf %lf" , &x, &y) ;

    d1 = sqrt(pow(x+1,2)+pow(y-0,2));
    d2 = sqrt(pow(x-0,2)+pow(y-0,2));
    if (d1<=R && d2<=R){
            printf("point belongs to the area of intersection of circles") ;
            return 0; }
            else {
                printf("point doesn`t belong to the area of intersection of circles");
            return -1;

            }
}
