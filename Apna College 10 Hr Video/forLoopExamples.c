#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++) // this loop will print integer number!
    {
        printf("%d ", i);
    }
    printf("\n\n");
    for (float i = 1; i <= 10; i++) // this loop will print floating number!
    {
        // printf("%f ", i);
        printf("%.2f ", i);
    }
    printf("\n\n");
    for (char ch = 'a'; ch <= 'z'; ch++) // this loop will print small letter alphabets!
    {
        printf("%c ", ch);
    }
    printf("\n\n");
    for (char ch = 'A'; ch <= 'Z'; ch++) // this loop will print capital letter alplabets!
    {
        printf("%c ", ch);
    }

    return 0;
}
