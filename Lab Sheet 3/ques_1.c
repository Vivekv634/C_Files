#include <stdio.h>

int main()
{
    int num1, num2, num3, greatest;
    printf("Enter the number 1: ");
    scanf("%d", &num1);
    printf("Enter the number 2: ");
    scanf("%d", &num2);
    printf("Enter the number 3: ");
    scanf("%d", &num3);
    greatest = num1;
    if (greatest < num2)
    {
        greatest = num2;
    }
    else if (greatest < num3)
    {
        greatest = num3;
    }
    if (greatest % 2 == 0)
    {
        printf("The greatest number is %d and also even number!", greatest);
    }
    else
    {
        printf("The greatest number is %d but an odd number!", greatest);
    }

    return 0;
}
