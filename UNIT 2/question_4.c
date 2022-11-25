#include <stdio.h>

int main()
{
    int a, b;
    char n;
    printf("Enter the value of A : ");
    scanf("%d", &a);
    printf("Enter the value of B : ");
    scanf("%d", &b);

    printf("Enter the operator (+, -, *, /) : ");
    scanf("%c", &n);

    switch (n)
    {
    case '+':
        printf("Sum of %d and %d is %d", a, b, a + b);
        break;

    case '-':
        printf("Difference of %d and %d is %d", a, b, a - b);
        break;

    case '*':
        printf("Multiplication of %d and %d is %d", a, b, a * b);
        break;
    case '/':
        printf("Remainder when %d is divided by %d is %f", a, b, a / b);
        break;
    }
    return 0;
}
