#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(int*, int*);
void show_matrix(int**, int);
void mysort(int**, int);

int main(int argc, char *argv[])
{
    int matrix_size, counter = 0;
    printf("Enter size of matrix: ");
    scanf("%d", &matrix_size);
    int **matrix = (int**)malloc(matrix_size * sizeof(int*));
    for (int i = 0; i < matrix_size; ++i)
    {
        matrix[i] = (int*)malloc(matrix_size * sizeof(int));
    }

    printf("\n");

    for (int i = 0; i < matrix_size; ++i)
    {
        for (int j = 0; j < matrix_size; ++j)
        {
            printf("Element matrix[%d][%d] = ", i+1, j+1);
            scanf("%d", &matrix[i][j]);

        }
    }

    printf("\nYour matrix:\n\n");
    show_matrix(matrix, matrix_size);

    for (int i = 0; i < matrix_size; ++i)
    {
        for (int j = 0; j < matrix_size; ++j)
        {
            if(i > j)
            {
                ++counter;
            }
        }
    }

    int *arr = (int*)(malloc(sizeof(int) * counter));

    counter = 0;
    for (int i = 0; i < matrix_size; ++i)
    {
        for (int j = 0; j < matrix_size; ++j)
        {
            if(i > j)
            {
                arr[counter++] = matrix[i][j];
            }
        }
    }

    /*for (int i = 0; i < counter; ++i)
    {
        printf("\n\t%d\t", arr[i]);
    }*/

    for (int i = 1; i < counter; i++)
    {
        int newElement, location;
        newElement = arr[i];
        location = i - 1;
        while(location >= 0 && arr[location] > newElement)
        {
            arr[location+1] = arr[location];
            location = location - 1;
        }
        arr[location+1] = newElement;
    }

    printf("\nThe minimum element which is under the main diagonal: %d", arr[0]);

    printf("\n\nSorted matrix: \n\n");
    mysort(matrix, matrix_size);
    show_matrix(matrix, matrix_size);

    printf("\n");
    return 0;
}

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void show_matrix(int **matrix, int matrix_size)
{
    for (int i = 0; i < matrix_size; ++i)
    {
        for (int j = 0; j < matrix_size; ++j)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n\n");
    }
}

void mysort(int **matrix, int matrix_size)
{
    for(int i = 0; i < matrix_size - 1; ++i)
    {
        int index = i;
        for(int j = i + 1; j < matrix_size; ++j)
        {
        if(matrix[1][j] < matrix[1][index])
        {
            index = j;
        }
        }

        for(int k = 0; k < matrix_size; ++k)
        {
        swap(&matrix[k][i], &matrix[k][index]);
        }
    }
}
