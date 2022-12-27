#include <stdio.h>

int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);
    if (num % 5 == 0 || num % 7 == 0 || num % 11 != 0)
    {
        printf("%d is a multiple of 5, divisible by 7 but not by eleven!", num);
    }

    return 0;
}
