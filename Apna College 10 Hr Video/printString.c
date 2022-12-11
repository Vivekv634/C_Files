#include <stdio.h>

void printString(char arr[])
{
    for (int i = 0; arr[i] != 0; i++)
    {
        printf("%c", arr[i]);
    }
}
int main()
{
    char name[1000];
    printf("Enter your name : ");
    fgets(name, 1000, stdin);
    printf("Your Name: ");
    printString(name);
    return 0;
}
