
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a,b,c ;
    printf ("Enter a,b,c:");
    scanf("%lf %lf %lf", &a, &b, &c) ;

    if (a<b&&a<c){
            if (b<c){
            printf("Smallest number %.5f\n", a) ;
            printf("Highest number %.5f\n",c) ;
            return 0;
            }
            else {
                printf("Smallest number %.5f\n", a) ;
                printf("Highest number %.5f\n",b) ;
                return 0;
            }
    }

    if (a>b && a<c ){
            printf( "Smallest number %.5f\n", b ) ;
            printf("Highest number %.5f\n",c) ;
            return 0;
    }
    if (a<b && a>c ){
            printf( "Smallest number %.5f\n", c) ;
            printf("Highest number %.5f\n",b) ;
            return 0;
    }

    if (a>b&&a>c){
            if (b>c){
            printf("Highest number %.5f\n",a) ;
            printf( "Smallest number %.5f\n", c) ;
            return 0;
            }
            else {
                printf("Highest number %.5f\n",a) ;
                printf( "Smallest number %.5f\n", b) ;
                return 0;
            }
    }
    if (a==b && a==c) {
            printf( "Values are equal" ) ;
            return 0;
        }
}
