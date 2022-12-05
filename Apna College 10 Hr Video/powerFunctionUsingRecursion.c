#include <stdio.h>

int power(int base, int value)
{
    if (value == 1)
    {
        return base;
    }
    return base * power(base, value - 1);
}
int main()
{
    int base, pow;
    printf("Enter the base value : ");
    scanf("%d", &base);
    printf("Enter the power value : ");
    scanf("%d", &pow);
    printf("%d raise to the power of %d is %d", base, pow, power(base, pow));
    return 0;
}
