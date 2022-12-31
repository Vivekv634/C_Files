#include <stdio.h>

int Fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

int main()
{
    int n = 5;
    printf("Fibonacci: %d", Fibonacci(n - 1));
    return 0;
}
