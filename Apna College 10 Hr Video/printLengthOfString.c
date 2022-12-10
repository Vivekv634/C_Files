#include <stdio.h>

void countLength(char arr[], int *length)
{
    for (int ch = 0; arr[ch] != "\0"; ch++)
    {
        *length++;
    }
    
}
int main()
{
    int length;
    char name[100];
    printf("Enter your full name : ");
    fgets(name, 100, stdin);
    countLength(name, &length);
    printf("Length of name : %d", length);
    return 0;
}
