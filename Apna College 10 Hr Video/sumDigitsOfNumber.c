#include <stdio.h>

int sumOfDigits(int n)
{
    int sum = 0, remainder;
    while (n > 0)
    {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);
    printf("The sum of the digits of the number is %d", sumOfDigits(num));
    return 0;
}
