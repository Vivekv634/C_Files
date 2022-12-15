#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the alphabet : ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is UPPER CASE!", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is LOWER CASE!", ch);
    }
    else
    {
        printf("Invalid Alphabet!");
    }

    return 0;
}
