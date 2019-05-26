#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,x ;
    printf ("Enter a: ");
    scanf("%d",&a);

   if (a==1) {
   printf ("it's not simple number");
   return -1 ;
}
    for (x=2; x*x<=a; x++) {
        if (a%x==0) {
            printf ("it's composite number");
            return -1 ;
        }
        else {
            printf ("it's simple number");
            return 0;
        }
    }
}
