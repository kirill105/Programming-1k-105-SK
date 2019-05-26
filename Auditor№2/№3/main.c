#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,d ;
    printf ("Enter a,b:");
    scanf("%d %d", &a, &b) ;

 if (a==b) {

            printf("numbers are the greatest dividers of each other") ;
            return 0;
    }

        while(a!=0 && b!=0){
                if (a>b){
                    a= a%b ;
                }
                else {
                    b=b%a ;
                }
            }
    d = a+b ;
    printf("%d",d);
    return 0;
}
