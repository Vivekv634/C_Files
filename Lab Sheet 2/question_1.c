#include <stdio.h>

int main()
{
    int a, b;
    float c;
    printf("Enter first integer value : ");
    scanf("%d", &a);
    printf("Enter second integer value : ");
    scanf("%d", &b);
    printf("Enter float value : ");
    scanf("%f", &c);
    printf("First Integer value : %d\nSecond Integer value : %d\nFloat value : %.02f", a, b, c);
    return 0;
}
