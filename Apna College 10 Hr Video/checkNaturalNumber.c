#include <stdio.h>

int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);
    // if (num >= 1)
    // {
    //     printf("%d is a natural number!", num);
    // }
    // else
    // {
    //     printf("%d is not an natural number!", num);
    // }

    // using ternary operator...
    num >= 1 ? printf("%d is a natural number!", num) : printf("%d is not a natural number!", num);
    return 0;
}
