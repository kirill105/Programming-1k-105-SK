#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double n1, n2, n3, n4 ;
    printf("Enter numbers on the first and second domino: ");
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    if(n1>6||n1<1||n2>6||n2<1||n3>6||n3<1||n4>6||n4<1){
        printf("You entered impossible values");
        return -1;
    }

    if (n1==n3&&n2==n4&&n1==n2){
        printf("You entered equal and impossible values");
        return -1;
    }

    if (n1==n3||n1==n4||n2==n3||n2==n4) {
        printf("Dominoes fold into a line");
        return 0;
    }
    else {
          printf("Dominoes doesn't line up");
          return 0;
    }
}
