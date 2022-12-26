#include <stdio.h>

int sumOfNumbers(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    else
    {
        return n + sumOfNumbers(n - 1);
    }
}
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    printf("Sum : %d", sumOfNumbers(n));
    return 0;
}
