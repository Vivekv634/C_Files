#include <stdio.h>

int main()
{
    int n, factorial = 1, i = 1;
    printf("Enter the Number : ");
    scanf("%d", &n);

    // for (int i = 1; i <= n; i++)
    // {
    //     factorial *= i;
    // }

    // do
    // {
    //     factorial *= i;
    //     i++;
    // } while (n >= i);

    // while (n >= i)
    // {
    //     factorial *= i;
    //     i++;
    // }

    printf("The factorial of %d is %d", n, factorial);

    return 0;
}
