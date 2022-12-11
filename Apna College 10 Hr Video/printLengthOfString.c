#include <stdio.h>

int lengthOfString(char arr[])
{
    int length=0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
int main()
{
    char name[100];
    printf("Enter your name : ");
    fgets(name, 100, stdin);
    printf("Length of the String : %d", lengthOfString(name));
    return 0;
}
