#include <stdio.h>

int main()
{
    int num1, num2, sum = 0;
    printf("Enter the value of number 1: ");
    scanf("%d", &num1);
    printf("Enter the value of number 2: ");
    scanf("%d", &num2);
    for (int i = num1; i <= num2; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("The sum of even numbers between these two numbers is %d", sum);
    return 0;
}
