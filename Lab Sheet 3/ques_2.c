#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the alphabet: ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Entered alphabet is vowel!");
    }
    else
    {
        printf("Entered alphabet is not vowel!");
    }

    return 0;
}
