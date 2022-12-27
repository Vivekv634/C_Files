#include <stdio.h>
#define mult(a, b) (a * b)
#define add(a, b) (a + b)
#define subs(a, b) (a - b)
#define div(a, b) (a / b)
#define PI 3.1416

int main()
{
    int a = 8, b = 4;
    printf("Multiplication of A and b : %.2f\n", PI * mult(a, b));
    printf("Addition of A and b : %.2f\n", PI * add(a, b));
    printf("Substraction of A and b : %.2f\n", PI * subs(a, b));
    printf("Division of A and b : %.2f\n", PI * div(a, b));
    return 0;
}
