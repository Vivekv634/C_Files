#include <stdio.h>

void printName(char arr[])
{
    for (int i = 0; arr[i] != "\0"; i++)
    {
        printf("%c", arr[i]);
    }
}
int main()
{
    char firstName[] = "Vivek";
    char lastName[] = "Vaish";
    printf("First Name : ");
    printName(firstName);
    printf("Second Name : ");
    printName(lastName);
    return 0;
}
