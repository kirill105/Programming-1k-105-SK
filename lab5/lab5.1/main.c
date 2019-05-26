#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ProDivSum(int);
int chkAmicable(int, int);

int main(int argc, char *argv[])
{
    int *arr = (int*)(malloc(sizeof(int) * 2));
    printf("Input the first number: ");
    scanf("%d", &arr[0]);
    printf("Input the second number: ");
    scanf("%d", &arr[1]);
    //printf("\n\nNumbers: %d %d\n\n", arr[0], arr[1]);
    if(chkAmicable(arr[0],arr[1]))
        printf("\nThe given numbers are an amicable pair.\n");
    else
        printf("\nThe given numbers are not an amicable pair.\n");

    free(arr);
    return 0;
}

int ProDivSum(int n)
{
    int sum = 1;
    for (int i=2; i <= sqrt(n); i++)
    {
        if (n%i == 0)
        {
            sum += i;
            if (n/i != i)
                sum += n/i;
        }
    }
    return sum;
}

int chkAmicable(int a,int b)
{
    return(ProDivSum(a) == b && ProDivSum(b) == a);
}
