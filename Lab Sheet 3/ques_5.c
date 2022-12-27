#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);
    if (isalpha(ch))
    {
        printf("%c is an alphabet ", ch);
        if (islower(ch))
        {
            printf("and also a lowercase character!");
        }
        else if (isupper(ch))
        {
            printf("and a uppercase character!");
        }
    }
    else if (isblank(ch))
    {
        printf("Blank character is entered!");
    }
    else if (isdigit(ch))
    {
        printf("%c is a digit!", ch);
    }
    return 0;
}
