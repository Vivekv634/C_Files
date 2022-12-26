#include <stdio.h>

int main()
{
    float add(int a, int b)
    {
        return a + b;
    }
    float sub(int a, int b)
    {
        return a - b;
    }
    float div(int a, int b)
    {
        return a / b;
    }
    float multi(int a, int b)
    {
        return a * b;
    }
    float num1, num2;
    printf("Enter the value of num1 & num2: ");
    scanf("%f %f", &num1, &num2);
    printf("Num1 + Num2 = %.2f\n", add(num1, num2));
    printf("Num1 - Num2 = %.2f\n", sub(num1, num2));
    printf("Num1 / Num2 = %.2f\n", div(num1, num2));
    printf("Num1 * Num2 = %.2f\n", multi(num1, num2));

    return 0;
}
