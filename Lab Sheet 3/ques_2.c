#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the alphabet: ");
    scanf("%c", &ch);
    // if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    // {
    //     printf("Entered alphabet is vowel!");
    // }
    // else
    // {
    //     printf("Entered alphabet is not vowel!");
    // }
    switch (ch)
    {
    case 'a':
        printf("Entered alphabet is vowel");
        break;
    
    case 'e':
        printf("Entered alphabet is vowel");
        break;
    
    case 'i':
        printf("Entered alphabet is vowel");
        break;
    
    case 'o':
        printf("Entered alphabet is vowel");
        break;
    
    case 'u':
        printf("Entered alphabet is vowel");
        break;
    
    default:
        printf("Entered alphabet is not vowel");
        break;
    }
    return 0;
}
