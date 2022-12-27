#include <stdio.h>

int main()
{
    int num1, num2, gcd, lcm;
    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);

    for (int i = 1; i <= num1 && i <= num2; ++i)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    lcm = (num1 * num2) / gcd;
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    printf("GCD of %d and %d is %d", num1, num2, gcd);
    return 0;
}
