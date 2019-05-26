#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c ;
    printf("Enter sides of a triangle: ");
    scanf ("%lf %lf %lf", &a,&b,&c);

    if(a >= b + c || b >= a + c || c >= b + a)
    {
     printf("It`s not triangle");
     return 0;
    }
    if (a==b&&b==c){
        printf("it`s equilateral triangle");
        return -1;
    }
    if (a==b || a==c || b==c) {
        printf("it`s isosceles triangle");
        return -1;
    }
   if(a*a == b*b+c*c || b*b == a*a+c*c || c*c == b*b+a*a){
      printf("it`s right triangle");
      return -1;
   }
   else {
   printf("it`s simple triangle");
   return 0;
   }
}
