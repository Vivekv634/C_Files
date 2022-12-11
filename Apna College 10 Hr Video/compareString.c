#include <stdio.h>
#include <string.h>

int main()
{
    char firstStr[100];
    char secondStr[100];
    printf("Enter the first string : ");
    fgets(firstStr, 100, stdin);
    printf("Enter the second string : ");
    fgets(secondStr, 100, stdin);
    int num = strcmp(firstStr, secondStr);
    if (num > 0)
    {
        printf("First string is greater than second string!");
    }
    else if (num < 0)
    {
        printf("Second string is greater than first string!");
    }
    else
    {
        printf("Both strings are equal!");
    }

    return 0;
}
