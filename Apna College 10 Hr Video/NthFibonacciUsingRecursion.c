#include <stdio.h>

int Fibonacci(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
    int num;
    printf("Enter the Nth number of Fibonacci sequence : ");
    scanf("%d", &num);
    printf("The %dth Fibonacci number is : %d", num, Fibonacci(num));
    return 0;
}
