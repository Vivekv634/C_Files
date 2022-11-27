#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;
    printf("Enter the number 1 : ");
    scanf("%d", &num1);
    printf("Enter the number 2 : ");
    scanf("%d", &num2);
    printf("The sum of these values is %d", sum(num1, num2));
    return 0;
}
