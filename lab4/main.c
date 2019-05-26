#include <stdio.h>
#include <stdlib.h>

char* c_space(char *);

int main(int argc, char *argv[])
{
    char str[255];
    printf("Enter the string: ");
    gets(str);
    c_space(str);

    printf("Result: %s\n", str);

    return 0;
}

char* c_space(char* str)
{

    for(size_t i = 0; i < strlen(str)-1; ++i)
    {
        if((str[i] == ' ') && (str[i+1] == ' '))
        {
            strcpy(&str[i], &str[i+1]);
            --i;
        }
    }
    return str;
}
