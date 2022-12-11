#include <stdio.h>
#include <string.h>

int countLength(char arr[])
{
    return strlen(arr);
}

int main()
{
    char name[100];
    printf("Enter the string : ");
    fgets(name, 100, stdin);
    printf("The length of the string is %d", countLength(name)-1);
    return 0;
}
