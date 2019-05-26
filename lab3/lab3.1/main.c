#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand (time(NULL));
    const int N = 10;
    int x[10], i;


    for (i=0; i<N; i++)
        printf("%4d", x[i] = rand()%5);
    printf("\n");


    int count;
    int result = 0;
    int k;
    for (i=0; i<N; i++)
    {
        for (count=k=0; k<=i; k++)
            if (x[i] == x[k]) count++;
        if (count == 1)
        {
            result++;
            printf("%4d", x[i]);
        }
    }

    printf("\n\n%d unique numbers\n", result);
    return 0;
}
